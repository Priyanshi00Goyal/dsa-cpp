//Basics of c++ programming
#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a = 5;
    int b = 10;
    int c = a + b;
    cout << "The sum of a and b is: " << c << endl;
    if (c > 10) {
        cout << "c is greater than 10" << endl;
    } else {
        cout << "c is not greater than 10" << endl;
    }
    for (int i = 0; i < 5; i++) {
        cout << "i is: " << i << endl;
    }
    while (a < 10) {
        cout << "a is: " << a << endl;
        a++;
    }
    do {
        cout << "b is: " << b << endl;
        b--;
    } while (b > 0);

    // Basic STL usage

    //vector usage
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Vector elements are: ";
    for (int num : vec) {
        cout << num << " ";
    }
    vec.begin();
    // Access first element of vector
    vec.end();
    // Access element after the last of vector
    vec.rbegin();
    // Access element at last
    vec.rend();
    // Access element before the first of vector

    //pair usage
    pair<int, int> p = {1, 2};
    cout << "Pair elements are: " << p.first << " and " << p.second << endl;
    cout << "Size of pair: " << sizeof(p) << endl;
    cout << "Is pair empty? " << (sizeof(p) == 0 ? "Yes" : "No") << endl;
    cout << "Element at index 0 of pair: " << p.first << endl;
    cout << "Element at index 1 of pair: " << p.second << endl;

    //list usage
    list<int> lst = {1, 2, 3, 4, 5};
    cout << "List elements are: ";
    for (int num : lst) {
        cout << num << " ";
    }
    cout << endl;
    cout << "First element of list: " << lst.front() << endl;
    cout << "Last element of list: " << lst.back() << endl;
    cout << "Size of list: " << lst.size() << endl;
    cout << "Is list empty? " << (lst.empty() ? "Yes" : "No") << endl;
    cout << "Max size of list: " << lst.max_size() << endl;
    lst.push_front(0);
    // Add element at beginning of list: " << lst.front() << endl;
    lst.push_back(6);
    // Add element at end of list: " << lst.back() << endl;
    lst.pop_front();
    // Remove element from beginning of list: " << lst.front() << endl;
    lst.pop_back();
    // Remove element from end of list: " << lst.back() << endl;

    //stack usage
    stack<int> stk;
    stk.push(1);
    // Add element to stack
    stk.pop();
    // Remove element from stack
    stk.top();
    // Access top element of stack
    stk.size();
    // Get size of stack
    stk.empty();
    // Check if stack is empty

    //queue usage
    queue<int> q;
    q.push(1);
    // Add element to queue
    q.pop();
    // Remove element from queue
    q.front();
    // Access front element of queue
    q.back();
    // Access back element of queue
    q.size();
    // Get size of queue
    q.empty();
    // Check if queue is empty

    //set usage
    set<int> s;
    s.insert(1);
    // Add element to set
    s.erase(1);
    // Remove element from set
    s.find(1);
    // Find element in set
    s.size();
    // Get size of set
    s.empty();
    // Check if set is empty

    return 0;
}
