# abbaslab4B
// q 5


#include <iostream>
using namespace std;
int addodd(int a,int b)
{if (b!=a)
{if(b%2==1)
{return b+addodd(a,b+1);}
else
return addodd(a,b+1);}
else{if(b%2==1)
{return b;}	
else 	
return 0;}}

int addeven(int a,int b)
{if (b!=a)
{if(b%2==0)
{return b+addeven(a,b+1);}
else	
return addeven(a,b+1);}
else{if(b%2==0)
{return b;}	
else	
return 0;}}

int main ()
{int a,b,n,c;
cout<<"Enter the limits ";
cin>>a>>b;
cout<<"\nTo add odd numbers, enter 1, for even numbers enter 2\n";
cin>>n;
if(n==1)
{c=addodd(b,a);}
else if(n==2)
{c=addeven(b,a);}
else{cout<<"\n Invalid entry";}
cout<<"\nThe required sum is "<<c;
