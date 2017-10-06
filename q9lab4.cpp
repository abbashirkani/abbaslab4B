# abbaslab4B
// q 9


include <iostream>
using namespace std;
int fac(int n)
    {if (n>1)
    return n*fac(n-1);
    else 
    return 1;
    }
int main() {
	int a;
	cout<<"Enter the number :\n";
	cin>>a;
	cout<<"The factorial of "<<a<<" is "<<fac(a);
	return 0;
}
    
