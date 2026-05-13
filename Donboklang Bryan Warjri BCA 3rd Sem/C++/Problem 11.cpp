//Decimal to binary
#include <iostream>
using namespace std;

int main()
{
   int a[10];
   int n,i,j;
   cout<<"\nEnter your number [0-999]:";
   cin>>n;
   if (n>999 || n<0)
   {
      cout<<"\nINVALID INPUT RESTING PROGRAM\n";
      main();
   }
   
    for (i = 0; n > 0; i++) {
        a[i] = n % 2;
        n = n / 2;
    }
   
   cout<<"the binary of the number you have entred is\n";
	for (j = i - 1; j >= 0; j--) {
        cout << a[j];
    }
    cout << endl;
   
return 0;
    
}
