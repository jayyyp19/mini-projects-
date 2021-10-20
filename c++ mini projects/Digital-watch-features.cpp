#include<iostream>
#include<windows.h>
using namespace std;
void clock();
void stopwatch();
void Timer();
int main(){
    cout<<"Hello This is a Digital Watch By Jay";
    int option;
    cout<<"DIGITAL WATCH FEATURES\n\n";
    cout<<"Press 1.Digital Clock 2.Stopwatch 3.Timer\n";
    cin>>option;
    // 
    // 
    switch(option){
        case 1: clock();
        break;
        case 2: 
        stopwatch();
        break;
        case 3:Timer();
        break;
    }
    
    return 0;
}
void clock(){
    int h,m,s,d;
    d=1000;
  cout<<"\n\nSET TIME(h:m:s)\n";
    cin>>h>>m>>s;
    // 
    // 
    // 
    if(h>12 || m>59|| s>59 ){
        cout<<"ERROR";
        exit(0);
    }
    while(1){
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
         cout<<"\t\t\t\t\tClock\n\n";
        cout<<"\t\t\t\t\t"<<h<<":"<<m<<":"<<s;
        Sleep(d);

        system("cls");
       
    }
}
void stopwatch(){
    int m,s;
    m=0;s=0;
    int d=1000;
    while(m==0){
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
          m++;
        }
        cout<<"\t\t\t\tSTOPWATCH\n";
        cout<<"\t\t\t\t"<<m<<":"<<s;
        Sleep(d);
        system("cls");
  } 
}
void Timer(){
    int h,m,s,i=0;
    int d=1000;
    cout<<"TIMER\n\n";
    cout<<"Set timer in format(h:m:s)";
    cin>>h>>m>>s;
    if(h>23 || m>59 || s>59){
        cout<<"ERROR";
     }
     while(i==0){
         s--;
         if(s<0){
             m--;
             s=59;
         }
         if(m<0){
             h--;
             m=59;
         }
         if(h<0){
             for(int j=0;j<10;j++ ){
               cout<<"******Time's up*******\n";
               Sleep(d);
             }
             i=1;
             break;
         }
         cout<<"\t\t\t\t\t\tTIMER\n\n";
         cout<<"\t\t\t\t\t\t"<<h<<":"<<m<<":"<<s;
         Sleep(d);
         system("cls");
     }
}
