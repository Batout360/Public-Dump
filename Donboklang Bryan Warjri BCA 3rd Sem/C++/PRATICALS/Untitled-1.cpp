#include<iostream>
class volume1{
    float width,height,length;
    public:
    volume1(int a,int b,int c)
    {
        width=a;
        height=b;
        length=c;
    }
    operator int(){
        int vol=width*height*length;
        return vol;
    }
};
int main(){
    volume1 v(7,13,70);
    int vol=v;


}
