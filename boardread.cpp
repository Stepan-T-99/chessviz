#include<stdio.h>
#include<iostream>
using namespace std;
void scandate(char a[9][9],char &x0,char &y0,char &x1,char &y1,char &strk)	
{
	cin>>x0>>y0>>strk>>x1>>y1;
	while(checkdate(x0,y0,x1,y1,strk)||checkstartposition(a,x0,y0,x1,y1,strk)||checkfirstposition(a,x0,y0,x1,y1,strk))
	{
	cin>>x0>>y0>>strk>>x1>>y1;	
	}
}
