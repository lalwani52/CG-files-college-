#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d://turboc3//bgi");
	int xc,yc,r;
	int xc1,yc1;
	double theta;
	int midx=getmaxx()/2;
	int midy=getmaxy()/2;
	
	char ch;
	
xc=yc=100;
r=20;
 


printf("Reflection about \n");
printf("X axis :  1\n");
printf("origin : 3\n");


while(ch!='e')
{
circle(midx+xc,midy-yc,r);
switch(ch)
{
	case 'x': yc=-yc;
	break;
	
	case 'y': xc=-xc;
	break;
	
	case 'o':
	xc=-xc;
	yc=-yc;
	
}
	circle(midx+xc,midy-yc,r);
ch=getch();
}
getch();
closegraph();
}