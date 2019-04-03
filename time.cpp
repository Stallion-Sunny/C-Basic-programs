#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int s,m,h,t;
	cout<<"Enter time in seconds\n";
	cin>>t;
	h=t/3600;
	m=t-h*3600;
	s=m%t;
	m=m/60;
	cout<<"Time is "<<h<<" hours "<<m<<" minutes "<<s<<" seconds";
	getch();
	}
