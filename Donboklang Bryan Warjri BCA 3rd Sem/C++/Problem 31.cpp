
//invoking type castiong opetrator
#include <iostream>
using namespace std;
class B
{
	int b;
	public:
	B()
	{b=0;}
	B(int i)
	{
		b=i;
	}
	void show(){cout<<b;}
};
class A
{
	int a;
	public:
	A(int x)
	{
		a=x;
	}
	operator B()//operator other_classtype
	{
		return B(a);
	}
	void show(){cout<<a;}
};
int main()
{
	A ob_a(2);
	B ob_b;
	ob_b=ob_a;//invokes the casting operator function
	cout<<"\n ob_a.a=";
	ob_a.show();
	cout<<"\n ob_a.b=";
	ob_b.show();
	return 0;
}