
#include<iostream>
#include<math.h>

using namespace std;

int z(int n)
{
	int a = 5, c = 11 , m = 22 , r ;
	
	if (n==1)
	{
		r = 2;
	}
	else if (n>1)
	{
		r = (a*z(n-1)+c) % m;
	}
	
	return r;
}



int main()
{
	float n1;
	
	for (int i=1;i<=11;i++)
	{
		n1 = z(i);
		//cout<<z(i)<<endl; //Solo entero
		cout<<n1/22<<endl; //punto decimal
	}
	
	return 0;
}


