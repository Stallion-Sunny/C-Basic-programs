#include<iostream.h>
#include<conio.h>
float farh()
{ float x,y;
cout<<" enter temperature in celciius\n";
cin>>x;
y=1.8*x + 32;
cout<<"temperature in farhanheit is"<<y;
}
float cel()
{ float x,y;
cout<<" enter temperatue in farhanheit\n";
cin>>x;
y=0.555555556 * (x-32);
cout<<"temperature in celcius is"<<y;
}
void main()
{     clrscr();
int a;
cout<<"press 1 for cel to far and 2 for far to cel\n";
cin>>a;
if(a==1)
farh();
else if(a==2)
cel();
else
cout<<"invalid option";

getch();
}
