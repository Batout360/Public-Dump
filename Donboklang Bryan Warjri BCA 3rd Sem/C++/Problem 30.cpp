//Invoking type casting operator to take polar to rectangulaer
#include <iostream>
#include <cmath>
using namespace std;
class rect
{
	float x,y;
	public:
	rect(){x=0;y=0;}
	rect(float rad, float ang)
	{
		x=rad*cos(ang);
		y=rad*sin(ang);
		}
	
	void show(){cout<<"x="<<x<<"\ny="<<y;}
};

class polar
{
	float a,r;
	public:
	polar(float r1, float a1)
	{
		a=a1;
		r=r1;
	}
	operator rect()
	{
		return rect(r, a);
	}
	
	void show(){cout<<a;}
};

int main()
{
	polar ob_pol(10,90);
	rect ob_rect;
	ob_rect=ob_pol;//polar to rect invokes the type casting
	
	ob_rect.show();
	
	return 0;
}