#include <iostream>
#include <vector>
using namespace std;

// Vector Syntax
// vector<datatype> name;

// vector<int> v;
// vector<char> = {'a', 'b', 'c', 'd', 'e'};
// vector<int> vec(5, 10); // 5 elements with value 10

int main()
{

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.pop_back();
    
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max Size: " << v.max_size() << endl;
    cout << "Back: " << v.back() << endl;

    for (int v : v)
    {
        cout << v << " ";
    }

    return 0;
}