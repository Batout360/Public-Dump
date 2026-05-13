//Pyrimd in numbers 
#include <iostream>
using namespace std;

int main()
{
    int i,j,row;

    cout<<"Enter number of rows: ";
    cin>>row;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            cout<<" ";
        }

        for(j=1;j<=i;j++)
        {
            cout<< j;
        }

        for(j=i-1;j>=1;j--)
        {
            cout<< j;
        }
        cout<<"\n";
    }

    return 0;
}

