#include <iostream>
using namespace std;


void linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout << "Key found at index " << i << endl;
            return;
        }
    }
    cout << "Key not found" << endl;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    linearSearch(nums, size, 5);
    
    return 0;
}