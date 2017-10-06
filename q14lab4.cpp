# abbaslab4B
// q 14


#include <iostream>
using namespace std;
int sumar (int a[100],int n,int i)
{if(i!=n)
{return a[i]+sumar (a,n,i+1);}
else
return 0;}

int main() 
{	int a[100],n,i;
	cout<<"Enter the number of elements in the array ";
	cin>>n;	cout<<"\nEnter the array elements ";
	for(i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"\nThesum of the elements of the array is "<<sumar(a,n,0);
	return 0;
}
