#include <iostream>
#include "Single_Linked_List.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Single_Linked_List<int> Test;

    Test.push_front(10);
    Test.push_back(20);
    Test.push_back(30);
    Test.push_back(40);
    Test.push_back(50);
    Test.push_back(60);
    Test.push_back(70);
    Test.push_back(80);
    Test.push_back(90);
    Test.push_back(100);
    cout << "20 is at index: " << Test.find(20) << endl;

    Test.remove(1);

    if (Test.find(20) >= Test.size()) {
        cout << "20 is not in the list. List has " << Test.size() << " items." << endl;
    } else {
        cout << "20 is at index: " << Test.find(20) << endl;
    }

    Test.insert(6, 20);

    if (Test.find(20) >= Test.size()) {
        cout << "20 is not in the list. List has " << Test.size() << " items." << endl;
    } else {
        cout << "20 is at index: " << Test.find(20) << endl;
    }

    cout << "Last item is: " << Test.back() << endl;
    cout << "First item is: " << Test.front() << endl;

    Test.pop_back();
    Test.pop_front();

    cout << "Last item is: " << Test.back() << endl;
    cout << "First item is: " << Test.front() << endl;

}