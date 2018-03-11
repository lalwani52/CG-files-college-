#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void bft(int x,int y,int bcolor,int fcolor)
{
	if(getpixel(x,y)!=bcolor && getpixel(x,y)!=fcolor)
	{
	putpixel(x,y,fcolor);
	delay(1);
	bft(x,y+1,bcolor,fcolor);
	bft(x,y-1,bcolor,fcolor);
	bft(x+1,y,bcolor,fcolor);
	bft(x-1,y,bcolor,fcolor);
	bft(x+1,y+1,bcolor,fcolor);
	bft(x-1,y-1,bcolor,fcolor);
	bft(x+1,y-1,bcolor,fcolor);
	bft(x-1,y+1,bcolor,fcolor);
}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d:\\turboc3\\bgi");
	int x,y;
	rectangle(100,100,150,150);
	bft(125,125,WHITE,WHITE);
}