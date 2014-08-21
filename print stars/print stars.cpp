#include<iostream>
#include<conio.h>

using namespace std;

void print_stars(int,int);

void main()
{
	int spaces=30;
	int lines,stars;
cout<<"How many lines in the pattern"<<endl;
cin>>lines;


for(int i=0;i<=lines;i++)
{


	print_stars(spaces,i);
	spaces--;


}
_getch();
}

void print_stars(int a,int b)
{
	for(int j=0;j<=a;j++)
		cout<<' ';
	for (int k=1;k<=b;k++)
		cout<<" *"; 
	cout<<endl;
}