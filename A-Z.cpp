// A -Z , a - z , 0 to 9 => Check karna hai , Range se hoga

#include<bits/stdc++.h>

using namespace std;

int main()
{

char ch;

cout<<"Enter any character : ";
cin>>ch;

if( ch >= 'a' && ch <= 'z')
cout<<"It is lowercase "<<endl;

else if(ch >= 'A' && ch <= 'Z')
cout<<"It is Uppercase "<<endl;

else if(ch >= '0' && ch <= '9')
cout<<"It is Numeric"<<endl;

else
cout<<"Pls enter Within The Range!!!";

return 0;
}
















