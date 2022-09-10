


// Linear Search == O(n) T.C.

// LS Revision
// #include <iostream>

// using namespace std;

// bool linearSearch(int arr[], int size, int key)
// {

//     // traverse karengey

//     for (int i = 0; i < size; i++)
//     {

//         if (key == arr[i])
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main()
// {

//     int size;

//     cout << "Enter The Size Of Array : " << endl;
//     cin >> size;

//     int arr[size];

//     cout << "Enter The Array Elements : " << endl;

//     // for Traversing the array
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;

//     cout << "Enter The Key to be found : " << endl;
//     cin >> key;

//     bool found = linearSearch(arr, size, key);

//     if (found)
//     {
//         cout << "key is present ";
//     }
//     else
//         cout << "key is not present ";

//     return 0;
// }

// Binary Search

// 1) Find Mid Element
// 2)  Compare mid/key
// 3) return index , != path decide

// Implementing

#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        // 2 Cases
        // if key is greater , go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // If key is smaller , move to left wala part
        else
        {
            end = mid - 1;
        }
        // start and end will update , so mid will also update
        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    // int evenIndex = binarySearch( even , 6 , 20);
    //  int evenIndex = binarySearch( even , 6 , 18);
    int oddIndex = binarySearch(odd, 5, 14);

    cout << "Index of 14 is " << oddIndex << endl;

    return 0;
}

// LS MEy 1000 Values == 1000 comaprison 

// O(n) 

// Binary Search meri Time Complexity O(logn) , isliye n/2 , n/2^1 , n/2^2 .... n / 2^k 


