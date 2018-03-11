#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<graphics.h>
void mpcirc(int xc, int yc, int radius)
{
int midx,midy,x,y,p;
midx=xc+getmaxx()/2;
midy=getmaxy()/2-yc;
p=1-radius;
x=0;
y=radius;


do{

		putpixel(midx + x, midy + y, WHITE);
		putpixel(midx - x, midy + y, WHITE);
		putpixel(midx + x, midy - y, WHITE);
		putpixel(midx - x, midy - y, WHITE);
		putpixel(midx + y, midy + x, WHITE);
		putpixel(midx - y, midy + x, WHITE);
		putpixel(midx + y, midy - x, WHITE);
		putpixel(midx - y, midy - x, WHITE);

x=x+1;
if(p<0)
{
p=p+2*x+1;
}
else
{
y=y-1;
p=p+2*x-2*y+1;
}
}while(x<y);
}

void main() {
	int gd=DETECT,gm;
	int xc,yc,radius;
	initgraph(&gd,&gm,"d://TURBOC3//BGI");
	mpcirc(50,50,50);
	mpcirc(50,150,150);
	getch();
	closegraph();
	}
