#ifndef INTEGER
#define INTEGER

using namespace std;

class Integer
{
private:
	int num;
public:
	void equals(int n);
	Integer add(const Integer &n);
	Integer sub(const Integer &n);
	Integer mul(const Integer &n);
	Integer div(const Integer &n);
	int toInt();
	void printInteger();
};

#endif