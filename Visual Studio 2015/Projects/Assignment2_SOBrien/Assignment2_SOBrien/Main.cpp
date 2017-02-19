#include <iostream>
#include "Integer.h"
#include "Double.h"

using namespace std;

int main()
{
	Integer n1, n2, n3, n4, n5, n6;
	n1.equals(10);
	n2.equals(20);
	n3 = n1.add(n2);
	n3.printInteger;
	n4 = n2.sub(n1);
	n4.printInteger;
	n5 = n1.mul(n2);
	n5.printInteger;
	n6 = n2.div(n1);
	n6.printInteger;

	Double d1, d2, d3, d4, d5, d6;
	d1.equals(1.5);
	d2.equals(2.5);
	d3 = d1.add(d2);
	d3.printDouble;
	d4 = d2.sub(d1);
	d4.printDouble;
	d5 = d1.mul(d2);
	d5.printDouble;
	d6 = d2.div(d1);
	d6.printDouble;


	return 0;
}