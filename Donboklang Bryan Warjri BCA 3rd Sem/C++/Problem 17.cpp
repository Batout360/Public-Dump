//Define class time Adding 2 objects
#include <iostream>
using namespace std ;
class time {
    int hr,min,sec;
    int hr1,min1,sec1;

    public: 
    void settings(){
        cout<<"HOUR 1\n";
        cout<<"Enter your hour:";
        cin>>hr;
        if(hr<0||hr>24)
        {
            cout<<"INVALID INPUT\n RESTARTING PROGRAM";
            
            
        }
        cout<<"Enter your minutes:";
        cin>>min;
                if(min<0||min>60)
        {
            cout<<"INVALID INPUT\n RESTARTING PROGRAM";
            
            
        }
        cout<<"Enter your seconds:";
        cin>>sec;
                if(sec<0||sec>60)
        {
            cout<<"INVALID INPUT\n RESTARTING PROGRAM";
           
            
        }
     
    
        
    }
    
    
    void settings2(){
        cout<<"HOUR 2";
        cout<<"Enter your hour:";
        cin>>hr1;
        if(hr1<0||hr1>24)
        {
            cout<<"INVALID INPUT\n RESTARTING PROGRAM";
            
            
        }
        cout<<"Enter your minutes:";
        cin>>min1;
                if(min1<0||min1>60)
        {
            cout<<"INVALID INPUT\n RESTARTING PROGRAM";
            
            
        }
        cout<<"Enter your seconds:";
        cin>>sec1;
                if(sec1<0||sec1>60)
        {
            cout<<"INVALID INPUT\n RESTARTING PROGRAM";
           
            
        }
    }

    void Display();
};


void time :: Display(){
    cout<<"\nThe Orgainal time is:\n"<<hr<<":HOURS\t"<<min<<":MINUTES  "<<sec<<"SECONDS\n";
    cout<<"\nThe Second time is:\n"<<hr1<<":HOURS\t"<<min1<<":MINUTES  "<<sec1<<"SECONDS\n";
    cout<<"\nThe Added  time is:\n"<<hr+hr1<<":HOURS\t"<<min+min1<<":MINUTES  "<<sec+sec1<<"SECONDS";
    

}


int main(){
 time t;
 t.settings();
 t.settings2();
 t.Display();
 return 0;
}