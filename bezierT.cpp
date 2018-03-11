#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void bez(int x[4],int y[4])
{
	int px,py;
	double t;
	for(t=0.0;t<1.0;t=t+0.001)
	{
		px=(1-t)*(1-t)*(1-t)*x[0]+3*(1-t)*(1-t)*t*x[1]+3*(1-t)*t*t*x[2]+t*t*t*x[3];
		py=(1-t)*(1-t)*(1-t)*y[0]+3*(1-t)*(1-t)*t*y[1]+3*(1-t)*t*t*y[2]+t*t*t*y[3];
		putpixel(px,py,WHITE);
		delay(2);
	}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d:\\turboc3\\bgi");
	int x[4],y[4],i;
	printf("enter 4 ctrl points");
	for(i=0;i<4;i++)
	{
		scanf("%d%d",&x[i],&y[i]);
	}
	bez(x,y);
	getch();
	closegraph();
}