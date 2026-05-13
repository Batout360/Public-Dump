//to generate a calander 
#include <iostream>
#include <iomanip> 
#include <windows.h>
using namespace std;

int main()
{
	int  year,a,b,c,n,i,count=0;
	cout<<"Enter the Month (It Should be in number ):";
	cin>>n;
    if (n<=0)
    {
     cout<<"Invalid INPUT/nResetting the program"<<endl;
     main();
    }
	cout<<"Enter the year of your Month:";
	cin>>year;
	if (year%4==0||year%400==0)
	{
		a=31;
		b=29;
		c=30;
	}
	if (year%2==0)
	{
		a=30;
		b=28;
		c=31;
	}
	
	
    cout<<"\nThe month you have entered is:";
    switch (n)
    {
    case 1:
        cout<<"January"<<endl;
        cout << "  MON  TUE  WED  THU  FRI  SAT  SUN" << endl;

		for (i = 1; i <= a; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}
	
	break;
	
    case 2:
        cout<<"Febuary"<<endl;
		cout << "  MON  TUE  WED  THU  FRI  SAT  SUN" << endl;

		for (i = 1; i <= b; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}
	        
        break;
    case 3:
        cout<<"March"<<endl;
		cout << "  MON  TUE  WED  THU  FRI  SAT  SUN" << endl;

		for (i = 1; i <= a; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}
        break;
       
    case 4:
        cout<<"April"<<endl;
		cout << "  MON  TUE  WED  THU  FRI  SAT  SUN" << endl;

		for (i = 1; i <= a; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}
	
        break;       
    case 5:
        cout<<"May"<<endl;
		cout << "  MON  TUE  WED  THU  FRI  SAT  SUN" << endl;
		for (i = 1; i <= a; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}
	
        break;
    case 6:
        cout<<"June"<<endl;
		cout << "  MON  TUE  WED  THU  FRI  SAT  SUN" << endl;
		for (i = 1; i <= a; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}
	
        break;
          
    case 7:
        cout<<"July"<<endl;
		cout << "  MON  TUE  WED  THU  FRI  SAT  SUN" << endl;
		for (i = 1; i <= a; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}
	   
        break;
    case 8:
        cout<<"August"<<endl;
		cout << "  MON  TUE  WED  THU  FRI  SAT  SUN" << endl;
		for (i = 1; i <= a; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}
	
        break; 
            
    case 9:
        cout<<"September"<<endl;
		cout << "  MON  TUE  WED  THU  FRI  SAT  SUN" << endl;
        for (i = 1; i <= a; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}
	
        break;
  
    case 10:
        cout<<"October"<<endl;
		cout << "  MON  TUE  WED  THU  FRI  SAT  SUN" << endl;
		for (i = 1; i <= a; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}
	
        break;       
    case 11:
        cout<<"November";
		for (i = 1; i <= a; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}

        break;
    case 12:
        cout<<"December";
		for (i = 1; i <= a; i++)
		{
			cout << setw(5) << i;
			count++;

			if (count == 7)
			{
				cout << endl;
				count = 0;
			}	
		}
	
        break; 

    default:
        break;
    }
    cout<<endl;
  

    cout << "  MON  TUE  WED  THU  FRI  SAT  SUN" << endl;
    for (i = 0; i < count; i++) {
        cout << setw(5) << " ";
    }

    for (i = 1; i <= a; i++) {
        cout << setw(5) << i;
        count++;

        if (count == 7) {
            cout << endl;
            count = 0;
        }
    }
	
	return 0;
}
