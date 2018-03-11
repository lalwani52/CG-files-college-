#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
void ddal(int x1, int y1, int x2, int y2)
{
	int dx,dy,dl,x,y,i=0;
	putpixel(x1,y1,WHITE);
	if(abs(x2-x1)>=abs(y2-y2))
	{
		dl=abs(x2-x1);
	}
	else
	{
		dl=abs(y2-y1);
	}
	dx=(x2-x1)/dl;
	dy=(y2-y1)/dl;
	x=x1;
	y=y1;
	while(i<=dl)
	{
		x=x+dx;
		y=y+dy;
		putpixel(x,y,WHITE);
		i++;
	}
}

void main()
{	int gd=DETECT,gm;
	initgraph(&gd,&gd,"d:\\turboc3\\bgi");
	int x1,x2,y1,y2;
	ddal(100,100,200,200);
	getch();
	closegraph();
}