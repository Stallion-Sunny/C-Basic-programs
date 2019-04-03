#include<iostream.h>
#include<conio.h>
int two_thousand=0,five_hundred=0,two_hundred=0,one_hundred=0,fifty=0;
float amount;

void calculate()
{
if(amount>=2000)
{	two_thousand++;
	amount=amount-2000;
	calculate();
	}
else if(amount>=500)
{     five_hundred++;
	amount=amount-500;
	calculate();
	}
else if(amount>=200)
{	two_hundred++;
	amount=amount-200;
	calculate();
	}
else if(amount>=100)
{	one_hundred++;
	amount=amount-100;
	calculate();
	}
else if(amount>=50)
{	fifty++;
	amount=amount-50;
	calculate();
	 }
else
cout<<""<<endl;


}




void main()
{
clrscr();

float amt;

cout<<"Enter the amount\n";
cin>>amount;
amt=amount;
//while(amount>50)
//{
	calculate();
// };

cout<<"Amount is "<<amt<<endl<<endl;
cout<<"2000 notes= "<<two_thousand<<endl;
cout<<"500 notes= "<<five_hundred<<endl;
cout<<"200 notes= "<<two_hundred<<endl;
cout<<"100 notes= "<<one_hundred<<endl;
cout<<"50 notes= "<<fifty<<endl;
cout<<"Remaining amount is= "<<amount<<endl<<endl;

cout<<"A PROGRAM BY **$$$$$ SUNNY KUMAR SINGH $$$$$**";

getch();
}

