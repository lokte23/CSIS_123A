#include <iostream>
#include "Integer.h"

using namespace std;

void Integer::equals(int n)
{
	num = n;
	
}

Integer Integer::add(const Integer&n)
{
	Integer tmp;
	tmp.num = num + n.num;
	return tmp;

}
Integer Integer::sub(const Integer &n)
{
	Integer tmp;
	tmp.num = num - n.num;
	return tmp;
}
Integer Integer::mul(const Integer &n)
{
	Integer tmp;
	tmp.num = num*n.num;
	return tmp;

}
Integer Integer::div(const Integer &n)
{
	Integer tmp;
	tmp.num = num / n.num;
	return tmp;
}
int Integer::toInt()
{
	return num;
}
