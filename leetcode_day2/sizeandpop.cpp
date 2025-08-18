/*
Write a program to:

Create a vector of integers with values {1,2,3,4,5}.

Print its size.

Remove the last element using pop_back().

Print the updated size and remaining elements.

Expected Output:

Size before pop: 5
Size after pop: 4
Remaining elements: 1 2 3 4
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    cout << "Size before pop: " << v.size() << endl;

    v.pop_back();

    cout << "Size after pop: " << v.size() << endl;
    cout << "Remaining elements: ";
    for (int x : v) {
        cout << x << " ";
    }
    return 0;
}
