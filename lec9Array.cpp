


// /*

// lets see we have a , b, c
// tell what is the max

// let say you have 10 values

// let say you have 100 values

// let say you have 10000 values

// ARRAY : yeh ek prakar ki list jisme same type of
// items dal skte hai!

// Aloo Example

// bohot sarre int hai 1000000

// They are stored in contiguous memory location

// They can be Accessed using index

// WHY ARRAY ????
// 1000000 values == 1 Variable

// */

// #include<iostream>

// using namespace std;

// //using function
// // void printArray( int arr[] ,  int size ){

// // //printing the array
// // for( int i = 0 ; i < size ; i++){
// //     cout<<arr[i]<<endl;
// // }

// // }

// int main(){

// // int arr[10] = { 1 , 2, 4, 5, 7, 8};
// // int n = 10;

// // int num[15];

// /*
// int dost[10];

// cout<<dost[5]<<endl;
// cout<<dost[7]<<endl;

// */

// // For Example You Want Intialize every Element with Zero , Then

// // int arr[5] = { 0 };

// // Accessing An Array!
// // cout<<arr[3]<<endl;
// // cout<<arr[2]<<endl;
// // cout << "Value at 20Th index is "  << arr[20] << endl;

// // For Example You Want I ntialize every Element with One , Then

// // // Printing An Array
// // for( int i = 0; i <= n ; i++){
// //     cout<<arr[i]<<" ";
// // }

// //    int arr[6] = { 1, 2 , 4, 5 };

// //    printArray( arr , 6 );

// // Size

// // int second[6] ={ 1 ,2 , 3 , 4 ,5 , 6};
// // int third[6] = { 2 , 3, 4, 5};
// // int firstSize = sizeof(third)/sizeof(int);

// // int n = 6;
// // for( int i = 0 ; i < n ; i++){
// // cout<<third[i]<<endl;
// // }
// // cout<< "Size Of Fifth is "<< firstSize <<endl;

// // //character Array
// // char ch[6] = {'a','b','c', 'd', 'e'};

// // for( int i = 0 ; i < 6 ; i++){
// //     cout<<ch[i]<<" ";
// // }

//     return 0;
// }

// MAX and MIN == -2^31 - 2^31 - 1

// MAX And MIN

// #include <iostream>
// #include <limits.h>

// using namespace std;

// int getMin(int arr[], int size)
// {

//     int min = INT_MAX;

//     for (int i = 0; i < size; i++)
//     {

//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }

//     return min;

//     // returning min value
// }

// int getMax(int arr[], int size)
// {

//     int max = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {

//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     return max;

//     // returning max value
// }

// int main()
// {

//     int size;

//     cout << "Enter The Size Of The Array : " << endl;
//     cin >> size;

//     int arr[size];

//     // taking intput in array

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     getMax(arr, size);
//     getMin(arr, size);

//     cout<< "The Maximum value in the Array is  " << getMax(arr, size) << endl;
//     cout << "The Minimum value in the Array is  : " << getMin(arr, size) << endl;

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int getMin(int arr[], int size)
// {

//     int mini = INT_MAX;

//     for (int i = 0; i < size; i++)
//     {
//         mini = min(mini, arr[i]);
//     }

//     return mini;

//     // returning min value
// }

// int getMax(int arr[], int size)
// {

//     int maxi = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {

//         maxi = max(maxi, arr[i]);
//     }

//     return maxi;

//     // returning max value
// }

// int main()
// {

//     int size;

//     cout << "Enter The Size Of The Array : " << endl;
//     cin >> size;

//     int arr[size];

//     // taking intput in array

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     getMax(arr, size);
//     getMin(arr, size);

//     cout << "The Maximum value in the Array is  " << getMax(arr, size) << endl;
//     cout << "The Minimum value in the Array is  : " << getMin(arr, size) << endl;

//     return 0;
// }

// Scopes In Array

/* Becoz The Address Of arr gets updated which means first element gets updated
it is call by reference ! , becoz the address is getting changed! first ,
means the actual array will get updated ! */

// HW Sum Print Sum Of All Element In an Array

// #include <iostream>

// using namespace std;

// int main()
// {

//     int size;
//     int sum = 0;

//     cout << "Enter The Size Of the Array : " << endl;
//     cin >> size;

//     int arr[size];

//     // taking input of an array
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     // Sum
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }

//     // output
//         cout << "The Sum of the array is : "<< sum << " ";
    

//     return 0;
// }

// Linear Search 

// #include <iostream>

// using namespace std;

// bool search( int arr[] , int size , int key){

// for( int i = 0 ; i < size ; i++){
//         if( arr[i] == key){
//             return 1;

//             // returning true 
//         }
//     }
//     return 0;
//     // returning flase , which means not found !
// }

// int main(){


// int size;

// cout<<"Enter The Size Of Array : "<<endl;
// cin>>size;

// int arr[size];

// cout<<" Enter The Array Elements : "<<endl;

// for( int i = 0 ; i < size ; i++){
//     cin>>arr[i];
// }
// // input the key 
// int key;

// cout<<"Enter The Key to be searched : "<<endl;
// cin>>key;

// bool found = search( arr , size , key);

// if( found ){
//     cout<<"key is present "<<endl;
// }
// else 
// cout<<" key is not present "<<endl;

//     return 0;
// }


// Reverse An Array 

#include<iostream>

using namespace std;

void reverse( int arr[] ,  int size){
    int start = 0;
    int end = size - 1;

    while( start <= end){
        swap( arr[start], arr[end]);
        start++;
        end--;
    }

}

void printArray( int arr[] ,  int size){

    for( int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){

int arr[6] = { 1 ,2 , 4, 7, 8 , 9 };
int brr[5] = { 1 ,2 , 4, 7, 8 };

// Calling The  reverse fucntion 

reverse(  arr , 6);
reverse(  brr , 5);

//Calling the PrintArray Function 
printArray( arr ,6 );
printArray(  brr ,5 );

}
