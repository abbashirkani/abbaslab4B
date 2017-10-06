# abbaslab4B
// q 8


#include <iostream>
using namespace std;

int sum(int a,int b)
{int c;
if(a!=0)
{c=a%10;
b=b+c;
return sum(a/10,b);}
else
return b;
}

int main() {
int a;
cout<<"\n Enter the number ";
cin>>a;
cout<<"\nThe sum of digits is "<<sum(a,0);
return 0;
}
