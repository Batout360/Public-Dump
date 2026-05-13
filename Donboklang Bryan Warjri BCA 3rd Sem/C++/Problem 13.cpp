//to check if its a triangle matrix or not
#include <iostream>
using namespace std;

int main()
{
 int n,a[10][10],i,j,n1;
 cout<<"Enter the number[MAX 10] of rows of the matrix: ";
 cin>>n;
 cout<<"Enter the number of colums[MAX 10]  of the matrix: ";
 cin>>n1;

 cout<<"\nEnter the elements of the matrix:\n";
 for(i=0;i<=n;i++){
    for(j=0;j<=n1;j++){
    cout<<"Enter element a["<<i<<"] ["<<j<<"]";
    cin>>a[i][j];
    }
    }
 cout << "\nMatrix:\n";
 for (int i = 0; i < n; i++) {
    for (int j = 0; j < n1; j++) {
        cout << a[i][j] << " ";
     }
    cout << endl;
    }
 

 return 0;
}