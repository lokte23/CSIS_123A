#include <iostream>
#include "Integer.h"
#include "Double.h"

using namespace std;

int main()
{
	Integer n1, n2, n3, n4, n5, n6;
	n1.equals(10);
	cout<< n1.toInt()<<endl;
	n2.equals(20);
	n3 = n1.add(n2);
	cout<<n3.toInt()<<endl;
	n4 = n2.sub(n1);
	cout<<n4.toInt()<<endl;
	n5 = n1.mul(n2);
	cout<<n5.toInt()<<endl;
	n6 = n2.div(n1);
	cout<<n6.toInt()<<endl;

	Double d1, d2, d3, d4, d5, d6;
	d1.equals(1.5);
	d2.equals(2.5);
	d3 = d1.add(d2);
	cout<<d3.toDouble()<<endl;
	d4 = d2.sub(d1);
	cout << d4.toDouble()<<endl;
	d5 = d1.mul(d2);
	cout<<d5.toDouble()<<endl;
	d6 = d2.div(d1);
	cout<<d6.toDouble()<<endl;


	return 0;
}