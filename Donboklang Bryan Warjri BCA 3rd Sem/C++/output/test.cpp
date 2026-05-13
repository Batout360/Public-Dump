//to check if its a triangle matrix or not
#include <iostream>
using namespace std;

int main()
{
 int n,a[90][90],i,j,n1;
 cout<<"Enter the number of rows  of the matrix: ";
 cin>>n;
 cout<<"Enter the number of rows  of the matrix: ";
 cin>>n1;

 cout<<"\nEnter the elements of the matrix:\n";
 for(i=0;i<=n;i++){
    for(j=0;j<=n1;j++){
    cout<<"Enter element a["<<i<<"] ["<<j<<"]";
    cin>>a[i][j];
    }
    }
 cout<<"\n";
 for(i=0;i>=n;i++){
    for(j=0;j>=n;j++){
    cout<< a[i][j];
    }
    }
 

 return 0;
}