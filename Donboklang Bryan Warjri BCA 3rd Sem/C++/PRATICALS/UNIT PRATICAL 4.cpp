// SumOfSeries
#include <iostream>
using namespace std;
int main(){
	int x, n, i, j , nu=1, de=1, sum;
	cout<<"Enter the nth term: ";
	cin>>n;
	cout<<"\nEnter the x: ";
	cin>>x;
	for(i=1; i<=n; i++){
		de=1,nu=1;
		for(j=1; j<=i; j++){
			nu*=x;
			de+=i*j;
			sum+=nu/de;
		}
	}
	cout<<"the sum of the series is "<<sum;
	return 0;
}
