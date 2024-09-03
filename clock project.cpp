#include <iostream>
#include <thread>
#include <iomanip>
#include <conio.h>
using namespace std;

void clock(int seconds, int minutes, int hour,string m);\

int main() {
	cout<<"Enter time:"<<endl;
        int sec;
		int min;
		int hour;
		string n;
	
		cout<<"enter seconds [0-60]:";
		cin>>sec;
		while(sec<0 || sec>60){
			cout<<" you enterd invalid seconds, pleas enter valid seconds:";
			cin>>sec;
		}
		cout<<"enter min [0-60]:";
		cin>>min;
		while(min<0 || min>60){
			cout<<" you enterd invalid minutes, pleas enter valid minutes:";
			cin>>min;
		}
		cout<<"enter hour [1-12]:";
		cin>>hour;
		while(hour<1 || hour>12){
			cout<<" you enterd invalid hour, pleas enter valid hour:";
			cin>>hour;
		}
		start:	
		cout<<"AM or PM: ";
		cin>>n; 
	if(n!="AM"&&n!="PM"&&n!="am"&&n!="pm")
	{
		cout<<"Choose from the options below!!! "<<endl;
		goto start;
	}
	    
		clock(sec,min,hour,n);
		
   
    return 0;
    getch();
}
void clock(int seconds, int minutes, int hour,string m){
	while (true) {
        
       if(seconds==60){
	        seconds=0;
        	minutes+=1;
        	if(minutes==60){
        		hour+=1;
        		minutes=0;
        		if(hour==13){
        			hour=1;
        			if(m=="AM"){
					
        			string x="PM";
        			m=x;
        		}
        			else{
        			string x="AM";
        			m=x;	
					}
        			
				}
			}
		}
		cout<<"\n \n \t\t\t \t Digital Clock"<<endl;
		cout<<"\n \n \t\t\t      -----------------"<<endl;
		cout<<"  \t\t\t\t"<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<minutes<<":"<<setw(2)<<setfill('0')<<seconds<<"  "<<m<<" ";
	    cout<<" \n \t\t\t      -----------------"<<endl;
        this_thread::sleep_for(chrono::seconds(1));
        
		system("CLS");
        
        seconds=seconds+1;
	
	}	
}


