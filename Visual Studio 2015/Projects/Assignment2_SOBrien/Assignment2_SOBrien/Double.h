#ifndef DOUBLE
#define DOUBLE

using namespace std;

class Double
{
private:
	double dub;
public:
	void equals(double d);
	Double add(const Double &d);
	Double sub(const Double &d);
	Double mul(const Double &d);
	Double div(const Double &d);
	double toDouble();
	
};

#endif
