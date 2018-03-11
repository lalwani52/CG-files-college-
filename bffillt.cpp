#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
void bound(int x,int y,int fc,int bc)
{
	if(getpixel(x,y)!=fc&&getpixel(x,y)!=bc)
	{
		putpixel(x,y,fc);
  		bound(x,y-1,fc,bc);
 		bound(x,y+1,fc,bc);
 		bound(x-1,y,fc,bc);
 	 	bound(x+1,y,fc,bc);
 	 	bound(x-1,y-1,fc,bc);
 		bound(x+1,y-1,fc,bc);
 	 	bound(x-1,y+1,fc,bc);
		bound(x+1,y+1,fc,bc);

	}
}
void flood(int x,int y,int oc,int nc)
{
	setcolor(RED);
	line(150,150,200,150);
	setcolor(BLUE);
	line(200,150,200,200);
	setcolor(GREEN);
	line(200,200,150,200);
	setcolor(MAGENTA);
	line(150,200,150,150);
	if(getpixel(x,y)==oc)
	{
		putpixel(x,y,nc);
 		flood(x,y-1,oc,nc);
  		flood(x,y+1,oc,nc);
  		flood(x-1,y,oc,nc);
  		flood(x+1,y,oc,nc);
  		flood(x-1,y-1,oc,nc);
  		flood(x+1,y-1,oc,nc);
  		flood(x-1,y+1,oc,nc);
  		flood(x+1,y+1,oc,nc);

 	}
}
void main()
{
	int gd=DETECT,gm;
	int x,y,ch;
	initgraph(&gd,&gm,"d:\\Turboc3\\BGI");
	rectangle(150,150,400,400);
	printf("Enter x and y co-ordinates of an interior point:\n");
	scanf("%d%d",&x,&y);
	printf("Enter choice:\n1. Boundary Fill\n2. Flood fill\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		bound(x,y,BLUE,WHITE);
		break;
  		case 2:
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(x,y,WHITE);
		break;
	}
 	getch();
 	closegraph();
}
