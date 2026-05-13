//power of cube
#include <iostream>
using namespace std;
int inline cube(int n){
 return (n*n*n);
}

int main() {
    int a,b;
    cout<<"Enter The cubic Number :";
    cin>>a;
    cout<<cube(a)<<endl;
   
    return 0;
}
