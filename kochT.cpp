#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void kochc(int x1,int y1,int x2,int y2,int n)
{
	float angle=M_PI*60/180;
	int x3,y3,x4,y4,x,y;
	x3=(2*x1+x2)/3;
	y3=(2*y1+y2)/3;
	
	x4=(2*x2+x1)/3;
	y4=(2*y2+y1)/3;
	
	x=x3+(x4-x3)*cos(angle)+(y4-y3)*sin(angle);
	y=y3-(x4-x3)*sin(angle)+(y4-y3)*cos(angle);
	if(n>0)
	{
	kochc(x1,y1,x3,y3,n-1);
	kochc(x3,y3,x,y,n-1);
	kochc(x,y,x4,y4,n-1);
	kochc(x4,y4,x2,y2,n-1);
	}
	else
	{
	line(x1,y1,x3,y3);
	line(x3,y3,x,y);
	line(x,y,x4,y4);
	line(x4,y4,x2,y2);
	}
	}

void main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d:\\turboc3\\bgi");
	kochc(100,400,400,400,4);
	getch();
	closegraph();
}

