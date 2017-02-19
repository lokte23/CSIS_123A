#include <iostream>
#include "Double.h"

using namespace std;

void Double::equals(double d)
{
	dub = d;
}

Double Double::add(const Double &d)
{
	Double tmp;
	tmp.dub = dub + d.dub;
	return tmp;
}

Double Double::sub(const Double &d)
{
	Double tmp;
	tmp.dub = dub - d.dub;
	return tmp;
}

Double Double::mul(const Double &d)
{
	Double tmp;
	tmp.dub = dub*d.dub;
	return tmp;
}
Double Double::div(const Double &d)
{
	Double tmp;
	tmp.dub = dub / d.dub;
	return tmp;
}

double Double::toDouble()
{
return dub;
}

