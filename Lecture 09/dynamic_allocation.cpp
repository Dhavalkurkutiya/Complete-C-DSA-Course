#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Creating a vector
    vector<int> v;

    // Adding elements to the vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // Printing the size and capacity of the vector
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    return 0;
}