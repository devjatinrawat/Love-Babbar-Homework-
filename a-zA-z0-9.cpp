

#include<iostream>

using namespace std;

int main()
{

char ch;

cout<<"Enter Any Character  : ";
cin>>ch;

//Lowercase  condition
if( ch >= 'a' && ch <= 'z' )
cout<<"it is lowercase"<<endl;


// Uppercase condition
else if( ch >= 'A' && ch <= 'Z' )
cout<<"it is uppercase"<<endl;


//numeric condition 
else if( ch >= '1' && ch <= '9' ){
    cout<<"it is numeric "<<endl;
}

    return 0;
}

/* You Can handle The Case where user enters something different from the above condition in that case 
nothing gets printed   */