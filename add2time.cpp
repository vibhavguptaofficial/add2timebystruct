#include<iostream>
using namespace std;
struct time
{
int d;
int h;
int m;
int s;
};

struct time add(struct time t1,struct time t2)
{
struct time t3;
t3.d=t1.d+t2.d;
t3.h=t1.h+t2.h;
t3.m=t1.m+t2.m;
t3.s=t1.s+t2.s;
if(t3.s>=60)
{
t3.m=t3.m+(t3.s/60);
t3.s=t3.s-(t3.s/60)*60;
}
if(t3.m>=60)
{
t3.h=t3.h+(t3.m/60);
t3.m=t3.m-(t3.m/60)*60;
}
if(t3.h>=24)
{
t3.d=t3.d+(t3.h/24);
t3.h=t3.h-(t3.h/24)*24;
}
return t3;
}

void print(struct time t3)
{
cout<<"DD:HH:MM:SS - "<<t3.d<<":"<<t3.h<<":"<<t3.m<<":"<<t3.s<<endl;
}

int main()
{
struct time t1;
struct time t2;
cout<<"enter the 1st time in DD HH MM SS form : "<<endl;
cin>>t1.d>>t1.h>>t1.m>>t1.s;
cout<<"enter the 2nd time in DD HH MM SS form : "<<endl;
cin>>t2.d>>t2.h>>t2.m>>t2.s;
struct time t3 = add(t1,t2);
print(t3);
return 0;
}