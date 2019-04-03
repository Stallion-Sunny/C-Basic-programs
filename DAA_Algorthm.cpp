#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>

void main()
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi\\");
	int x1,x2,y1,y2,m,p,q,flag=1;
	cout<<"Enter co-ordinates of starting point i.e (x1,y1)\n";
	cin>>x1>>y1;
	cout<<"Enter co-ordinates of ending point i.e (x2,y2)\n";
	cin>>x2>>y2;

	putpixel(x1,y1,GREEN);

	m=int((y2-y1)/(x2-x1));
	p=x2;q=y2;
	if(m<=1)
	{	x2=int(x1+1);
		y2=int(y1+m);
		}
	else
	{	y2=int(y1+1);
		x2=int((1/m)+x1);
		}
	putpixel(x2,y2,GREEN);
	x1=x2;
	y1=y2;

	while(flag<10)
	{if(x1==p && y1==q)
	 {
	   flag=10;
	   break;}

	m=int((y2-y1)/(x2-x1));
	if(m<=1)
	{
	x2=int(x1+1);
	y2=int(y1+m);
	}
	if(m>1)
	{
	y2=int(y1+1);
	x2=int((1/m)+x1);
	}
	putpixel(x2,y2,GREEN);
	x1=x2;
	y1=y2;
	flag++;
	}
getch();
closegraph();

}
