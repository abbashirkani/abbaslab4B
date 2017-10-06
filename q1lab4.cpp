# abbaslab4B
// q 1


#include <iostream>
using namespace std;
int pow(int a, int b)
{if (b != 0)
return a*pow(a, b-1);
else 
return 1;
}

int main()
{   int a, b;
  cout << "Enter the number and the power: \n ";
   cin >> a >> b;
   cout <<a<<" raised to the power "<<b<<" is: " <<pow(a, b);
   return 0;
}


