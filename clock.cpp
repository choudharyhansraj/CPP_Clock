#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	int h,m,s,a,er;
	er=0;
	a=0;
	while(er==0){
		cout<<"Enter hour: ";
		cin>>h;
		cout<<"Enter minute: ";
		cin>>m;
		cout<<"Enter second: ";
		cin>>s;
		if(h<24&&m<60&&s<60){
			er++;
		}
			else{
				system("cls");
			}
		while(a==0)
		{
	     		system("cls");   //---> For clearing the screen "cls" 
		    	cout<<h<<":"<<m<<":"<<s<<endl;
/*S capital*/   Sleep(1000);  // if 10 then clock speed very fast if 100 then slow but fast if 1000 then
		    	s++;          // like second if 10000 then more slow 
	
			if(s>59){
				s=0;
				m++;
			}
			if(m>59){
				m=0;
				h++;
			}
			if(h>24){
				h=1;
			}
		}
		
	}
	return 0;
}

