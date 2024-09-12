#include <iostream>
using namespace std;

void smallest(int arr[], int size)
{
    int small = arr[0];
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            index = i;
        }
    }
    cout << "Smallest number is : " << small << " at index " << index << endl;
}
void largest(int arr[], int size)
{
    int large = arr[0];
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            index = i;
        }
    }
    cout << "Largest number is : " << large << " at index " << index << endl;
}

void changeValue(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    int nums[] = {-1, 20, 25, 30, -50, -3, 4, -5};
    int size = sizeof(nums) / sizeof(nums[0]);

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size2 = sizeof(numbers) / sizeof(numbers[0]);

    smallest(nums, size);
    largest(nums, size);

    changeValue(nums, size);

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}