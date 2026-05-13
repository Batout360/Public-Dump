//Define class time 
#include <iostream>
using namespace std ;
class time {
    int hr,min,sec;
    public: 
    void settings(){
        
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
    void Display();
};


void time :: Display(){
    cout<<"\nThe time is:\n"<<hr<<":HOURS\t"<<min<<":MINUTES  "<<sec<<"SECONDS";

}


int main(){
 time t;
 t.settings();
 t.Display();
 return 0;
}