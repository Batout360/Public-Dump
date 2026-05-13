#include <iostream>
#include <cstring>
using namespace std;
class String{
	char *p;
	int len;
public:
	String(){
		p=0;
		len=0;
	}
	String(const String &str){
		len = str.len;
		p=new char[len + 1];
		strcpy(p,str.p);
	}
	String(const char *s){
		len = strlen(s);
		p = new char[len + 1];
		strcpy(p, s);
	}
	void friend show(const String &s){
		cout<<s.p<<endl;
	}
	String friend operator+(const String &str1, const String &str2);
};

String operator+(const String &str1, const String &str2){
	String temp;
	temp.len = str1.len + str2.len;
	temp.p = new char[temp.len + 1];
	strcpy(temp.p,str1.p);
	strcat(temp.p,str2.p);
	return temp;
}

int main(){

	String s1("New");
	String s2(" Delhi");
	String s3;
	String t1=s1;
	String t2=s2;
    s3 = t1 + t2;
	cout<<"String s1 = ";
	show(s1);
	cout<<"String s2 = ";
	show(s2);
	cout<<"String s3 = ";
	show(s3);
	return 0;
}