# abbaslab4B
// q 10


#include <iostream>
using namespace std;

int fib(int a,int b,int c)
{int d;
d=b+c;
if (a!=0)
return fib(a-1,c,d);
else
return d;
}

int main() {
int a;
cout<<"\n Enter the term of the fibonnaci series to print ";
cin>>a;
a=a-3;
if(a<0)
cout<<"\nThe term is 1";
else
cout<<"\nThe term is "<<fib(a,1,1);

	return 0;
}
