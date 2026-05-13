//Adding Complex Numbers 
#include <iostream>
using namespace std;

class num{
	int a,b,r,c;
	public :
	void print(int,int );
	void nu(){
		cout << "Enter the 1st number : ";
		cin >> a;
		cout << "Enter the 2nd number : ";
		cin >> b;
	}
	void add( num a, num b){
		a.nu();
		b.nu();
		r = a.a + a.b;
		c = b.a + b.b;
		 print( r, c);
	}
};

void num :: print( int a, int b){
	cout << a << " + " << b;
}

int main () {
	num n,n1;
	n.add(n,n1);
	return 0;
}
	
