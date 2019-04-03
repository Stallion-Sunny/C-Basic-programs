#include<iostream.h>
#include<conio.h>
void main()
{     clrscr();
      int i,n,sum ;
      for(n=1;n<=100;n++)
      {sum=0;
      for(i=1;i<=n-1;i++)
      {if(n%i==0)
      sum=sum+i;
      }
      if(sum==n)
      cout<<n<<"\n";
      }

	getch();
}
