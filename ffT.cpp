#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void ffil(int x,int y,int ocolor,int ncolor)
{
	if(getpixel(x,y)==ocolor)
	{
		putpixel(x,y,ncolor);
	delay(2);
	ffil(x,y+1,ocolor,ncolor);
	ffil(x,y-1,ocolor,ncolor);
	ffil(x+1,y,ocolor,ncolor);
	ffil(x-1,y,ocolor,ncolor);
	ffil(x-1,y-1,ocolor,ncolor);
	ffil(x+1,y+1,ocolor,ncolor);
	ffil(x-1,y+1,ocolor,ncolor);
	ffil(x+1,y-1,ocolor,ncolor);
}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d:\\turboc3\\bgi");
	int x,y;
	line(100,100,100,150);
	
	line(100,100,150,100);
	
	line(100,150,150,150);
	
	line(150,100,150,150);
	ffil(125,125,0,WHITE);
	getch();
	closegraph();
	
}