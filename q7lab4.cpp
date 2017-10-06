# abbaslab4B
// q 7


#include <iostream>
using namespace std;

int rev(int a,int b)
{ 
int c;
if(a!=0)
{
c=a%10;
b=b*10+c;
return rev(a/10,b);}
else
return b;
}

int main() {
int a,d,c;
cout<<"\n Enter the number ";
cin>>a;
c=a;
d=rev(a,0);
if(c==d)
cout<<"\nThe number is a palindrome ";
else
cout<<"\nThe number is not a palindrome";
return 0;
}
