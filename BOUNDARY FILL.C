#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<DOS.h>
void boundaryfill(int x, int y, int fcolor,int bcolor)
{
	if((getpixel(x,y)!=bcolor) && (getpixel(x,y)!=fcolor))
	{
putpixel(x,y,fcolor);
		
delay(1);
		
		boundaryfill(x+1,y,fcolor,bcolor);
		boundaryfill(x-1,y,fcolor,bcolor);
		boundaryfill(x,y+1,fcolor,bcolor);
		boundaryfill(x,y-1,fcolor,bcolor);
		boundaryfill(x-1,y-1,fcolor,bcolor);
		boundaryfill(x+1,y+1,fcolor,bcolor);
		boundaryfill(x-1,y+1,fcolor,bcolor);
		boundaryfill(x+1,y-1,fcolor,bcolor);
	}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"../bgi");
	rectangle(200,200,300,300);
	boundaryfill(225,225,WHITE,WHITE);
	getch();
	closegraph();
}