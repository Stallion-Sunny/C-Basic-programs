#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<string.h>

char str[100],temp[100],temp1[100];


void encrypt();
void decrypt();


void main()
{
clrscr();
int ch=1;
cout<<"\n\n\n\n\n";
cout<<"*****WELCOME TO SECURITY ENCRYPTION*****\n";

delay(500);
clrscr();
cout<<"Enter the TEXT for encryption\n";
gets(str);


clrscr();
encrypt();
cout<<"Encrypted text is \t";
puts(temp);

cout<<"\nFor decryption press 1\n";
cin>>ch;

if(ch==1)
{decrypt();
cout<<"Decrypted text is \t";
puts(temp1);
}
else
{cout<<"Exiting the program\n";
delay(100);
exit(0);   }

cout<<"\nPROGRAM BY STAllION\n";
getch();
}


void encrypt()
{ int i;
for(i=0;i<strlen(str);i++)
temp[i]=(char)(str[i]+3);

}

void decrypt()
{int i;
for(i=0;i<strlen(str);i++)
temp1[i]=(char)(temp[i]-3);
 }
