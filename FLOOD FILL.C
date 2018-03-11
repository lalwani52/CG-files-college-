#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<DOS.h>
void floodfil(int x, int y, int oldc, int newc)
{
	if(getpixel(x,y)==oldc)
	{
		putpixel(x,y,newc);
	
		floodfil(x+1,y,oldc,newc);
		floodfil(x-1,y,oldc,newc);
		floodfil(x,y+1,oldc,newc);
		floodfil(x,y-1,oldc,newc);
		floodfil(x-1,y-1,oldc,newc);
		floodfil(x+1,y+1,oldc,newc);
		floodfil(x-1,y+1,oldc,newc);
		floodfil(x+1,y-1,oldc,newc);
	}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"../bgi");
	setcolor(3);
	//line(0,0,100,150);
	
	//line(0,0,150,100);
	
	//line(0,150,150,150);
	
	//line(150,0,150,150);
	rectangle(200,200,350,350);
	floodfil(225,225,0,WHITE);
	getch();
	closegraph();
}