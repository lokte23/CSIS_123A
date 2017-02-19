#ifndef DOUBLE
#define DOUBLE

using namespace std;

class Double
{
private:
	double d;
public:
	void equals(double dub);
	Double add(const Double &d);
	Double sub(const Double &d);
	Double mul(const Double &d);
	Double div(const Double &d);
	double toDouble();
	void printDouble();
};

#endif
