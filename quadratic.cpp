#include <iostream>
#include <cmath>
using namespace std;

int main()


{
 	
	cout << "hi this program for the calculate equation roots" << endl;
	cout << "enter the value of a " << endl;
	int a;
	cin >> a;
	cout << "enter the value of b" << endl;
	int b;
	cin >> b;
	cout << "enter the value of c" << endl;      
	int c;
	cin >> c;
	double d=((b*b)-(4*a*c));
	if(d>0)
	{
	 double x1=((-b-sqrt(d)) /	(2*a));
	 double x2=((-b+sqrt(d)) / (2*a));
	 cout << "the equation has two roots" << x1;
	 cout << " and: " << x2;
	}
	else if (d==0)
	{
	 double x1=((-1*b) / (2*a));
	 cout << " the equation has one roots,that root is " << x1;
	}
    else 
    {
    	cout << " there is no real roots" << endl; 
	}
	system("pause");
	return 0;
}
