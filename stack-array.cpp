//program to implement stack using array:::insertion, deletion, display:::: operations cn be performed
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int top=-1;
int s[5];

void push(int m)
{
	if (top==4)
	{ cout<<"OVERFLOW"<<endl;
	  getch();
	  }

	else
	{	top=top+1;
	s[top]=m;
	}
	}

void pop()
{
	if(top==-1)
	{ cout<<"UNDERFLOW"<<endl;
	getch();
	}

	else
	{	cout<<"DELETED ELEMENT IS "<<s[top]<<endl;
		top=top-1;
		}
		}

void display()
{
		if(top==-1)
		{cout<<"NO ELEMENT TO DISPLAY"<<endl;
		getch();
		}

		else
		{
		   for(int i=0;i<=top;i++)
		   cout<<s[i]<<" ";
		   cout<<endl;
		   }
		   }

 void main()
 {  clrscr();
	int choice,n;
	do
	{
	 cout<<"PRESS 1 TO INSERT"<<endl;
	  cout<<"PRESS 2 TO DELETE"<<endl;
	  cout<<"PRESS 3 TO DISPALY"<<endl;
	  cout<<"PRESS 4 TO EXIT"<<endl;

	  cin>>choice;

	  switch(choice)
	  {
		case 1: cout<<"INPUT ELEMENT"<<endl;
			cin>>n;
			push(n);
			break;
		case 2: pop();
			break;
		case 3: display();
			break;
		case 4: exit(0);

		default: cout<<"invalid input \n";

		}
	      cout<<endl;
		}while(choice!=4);
		getch();

		}
