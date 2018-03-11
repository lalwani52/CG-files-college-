#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void mpc(int xc,int yc, int r)
{
	int p,x,y,midx,midy;
	midx=xc+getmaxx()/2;
	midy=getmaxy()/2-yc;
	x=0;
	y=r;
	p=1-r;
	do{
		putpixel(midx+x,midy+y,WHITE);
		putpixel(midx-x,midy+y,WHITE);
		putpixel(midx+x,midy-y,WHITE);
		putpixel(midx-x,midy-y,WHITE);
		putpixel(midx+y,midy+x,WHITE);
		putpixel(midx-y,midy+x,WHITE);
		putpixel(midx+y,midy-x,WHITE);
		putpixel(midx-y,midy-x,WHITE);
		
		x=x+1;
		if(p<0)
		{
			p=p+2*x+1;
		}
		else
		{
			
			p=p+2*x-2*y+1;
			y=y-1;
		}
	}while(x<y);
}

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d:\\turboc3\\bgi");
	int xc,yc,r;
	mpc(50,50,50);
	mpc(-120,150,70);
	getch();
	closegraph();
	
}