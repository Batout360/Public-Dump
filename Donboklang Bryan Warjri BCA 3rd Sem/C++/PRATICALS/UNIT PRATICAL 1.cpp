// Conversion of celsuis to fehrenheit
 
#include <iostream>
using namespace std ;

float conftoc(float a)
{
float conftoc=(a-32)*5/9;
cout<<"\nThe converstion of Ferenghit to Celusis is:";
cout<<conftoc;
return 0;
}

float conctof(float a)
{
int conctof=(a*9/5)+32;
cout<<"\nThe converstion of Celusis to Ferenghit is:";
cout<<conctof;
return 0;
}


int main ()
{
float a; int b;
cout<<"\nEnter your number:";
cin>>a;
cout<<"\n";
cout<<"Enter 1 to convert C to Ferienghit \nEnter 2 to convert F to Celesuis \nEnter your choice:";
cin>>b;
cout<<"\n Calculating in Progress";

if(b==1){

    cout<<"\nThe number:"<<a<<" is What you have entered";

    conctof(a);

}

else if (b==2)
{
   conftoc(a);
}

else
{
    cout<<"\nInvalid Input Try again\nRestarting\n";
    main();
}



return 0;
}
