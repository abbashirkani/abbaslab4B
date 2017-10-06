# abbaslab4B
// q 6 


#include <iostream>
using namespace std;

int rev(int a,int b)
{int c;
if(a!=0)
{c=a%10;
b=b*10+c;
return rev(a/10,b);}
else
return b;
}

int main() {
int a,b=0;
cout<<"\n Enter the number to be reversed ";
cin>>a;
cout<<"\n The reverse of the number is "<<rev(a,b);
	return 0;
}
