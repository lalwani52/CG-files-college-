#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void fract(int l,int a,int x1,int y1)
{
	double angle=3.14*30/180;
	if(l!=0)
	{
		
		double a1=a+angle;
		double a2=a-angle;
		int x=x1+l*cos(a1);
		int y=y1-l*sin(a1);
		setcolor(YELLOW);
		line(x1,y1,x,y);
		fract(l/2,a1,x,y);
		x=x1+l*cos(a2);
		y=y1-l*sin(a2);
		line(x1,y1,x,y);
		fract(l/2,a2,x,y);
		a1=a1+angle;
		a2=a2-angle;
		x=x1+l*cos(a1);
		y=y1-l*sin(a1);
		line(x1,y1,x,y);
		fract(l/2,a1,x,y);
		x=x1+l*cos(a2);
		y=y1-l*sin(a2);
		line(x1,y1,x,y);
		fract(l/2,a2,x,y);
	}
		
	}


void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d:\\turboc3\\bgi");
	while(kbhit()==0)
	{
		fract(50,90*3.14/180,200,200);
	}
}