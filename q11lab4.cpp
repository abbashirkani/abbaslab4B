# abbaslab4B
// q 11


#include <iostream>
using namespace std;

int hcf(int a,int b,int c)
{if (a%b==0&&c%b==0)
return b;
else
return hcf(a,b-1,c);
}

int main() {
	int a,b;
	cout<<"Enter the numbers ";
	cin>>a>>b;
	cout<<"\nThe hcf of these two numbers is "<<hcf(a,b,b);
	return 0;
}
