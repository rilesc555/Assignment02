//
// Created by Riley Connors on 10/3/23.
//Class Templates don't work well when separated into .h and .cpp, so after a lot of research put definition and implementation into one .h file
//

#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include <stdexcept>

using namespace std;

template <typename Item_Type>
class Single_Linked_List {
public:
    //Struct for each node. with constructor
    struct Node {
        Item_Type data;
        Node* next;
        explicit Node(const Item_Type& data_item, Node* next_ptr = nullptr) : data(data_item), next(next_ptr) {};
    };

    //constructor
    Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {};

    //destructor
    ~Single_Linked_List() {
        while (!empty()) {
            pop_front();
        }
    }

    //adds item to front of list, updates head and increases number of items
    void push_front(const Item_Type& item) {
        head = new Node(item, head);
        if (tail == nullptr) {
            tail = head;
        }
        ++num_items;
    }

    //adds item to back of list, updates tail, and increments num_items
    void push_back(const Item_Type& item) {
        if (tail == nullptr) {
            push_front(item);
        } else {
            tail->next = new Node(item);
            tail = tail->next;
            ++num_items;
        }
    }

    //removes item from front of list, throws error if already empty, updates head and cleans memory, decrements num_items
    void pop_front() {
        if (empty()) {
            throw std::runtime_error("List is empty");
        }
        else {
            Node* temp = head;
            head = head->next;
            delete temp;
            num_items--;
            if (empty()) {
                tail = nullptr;
            }
        }
    };

    //removes from back of list. Time complexity O(n). Handles memory, throws error if already empty, and decrements num_items
    void pop_back() {
        if (empty()) {
            throw std::runtime_error("List is empty");
        } else if (head == tail) {
            pop_front();
        }
        else {
            Node *counter = head;
            while (counter->next != tail) {
                counter = counter->next;
            }
            delete tail;
            tail = counter;
            --num_items;
        }
    };

    //returns data of front node, or error if empty
    Item_Type front() const {
        if (empty()) {
            throw std::runtime_error("List is empty");
        }
        else {
            return head->data;
        }
    };

    //returns data of back node, or error if empty
    Item_Type back() const {
        if (empty()) {
            throw std::runtime_error("List is empty");
        }
        else {
            return tail->data;
        }
    };

    //checks if list is empty
    bool empty() const {
        return this->num_items < 1;
    };

    //inserts at specified position. Time complexity O(n)
    void insert(size_t index, const Item_Type& item) {
        if (index >= num_items) {
            push_back(item);
        }
        else if (index == 0) {
            push_front(item);
        }
        else {
            Node* prev = head;
            for (size_t i = 1; i < index; i++) {
                prev = prev->next;
            }
            prev->next = new Node(item, prev->next);
            num_items++;
        }
    };

    //removes from index. returns false if impossible, otherwise true. Cleans memory, decrements num_items.
    bool remove(size_t index) {
        if (index >= num_items) {
            return false;
        }
        if (index == 0) {
            pop_front();
            return true;
        }

        size_t counter = 0;
        Node* prev = head;
        while (counter < (index - 1)) {
            prev = prev->next;
            counter++;
        }
        Node* temp = prev->next;
        prev->next = prev->next->next;
        delete temp;
        num_items--;
        return true;
    };

    //finds first instance of item, returns index. If not present returns size of list.
    size_t find(const Item_Type& item) const {
        size_t index = 0;
        Node* counter = head;
        while (counter != nullptr) {
            if (counter->data == item) {
                return index;
            }
            index++;
            counter = counter->next;
        }
        return index;
    };

    size_t size() const {
        return num_items;
    }

private:
    Node* head;
    Node* tail;
    size_t num_items;
};

#endif


