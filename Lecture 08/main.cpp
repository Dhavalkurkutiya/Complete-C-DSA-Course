// 1. Whst is arrays ?
// Ans : Array is a collection of similar data types. It is a container which can hold a fix number of items and these items should be of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

// Data Structure - Data structure is a way of organizing the data so that the data can be used efficiently. Different kinds of data structures are suited to different kinds of applications, and some are highly specialized to specific tasks.

// Algorithm - An algorithm is a step-by-step procedure, which defines a set of instructions to be executed in a certain order to get the desired output. Algorithms are generally created independent of underlying languages, i.e. an algorithm can be implemented in more than one programming language.

#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int  i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    
    
    return 0;
}