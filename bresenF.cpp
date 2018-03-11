#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int sign(x)
{
	if(x>0)
		return 1;
	else if(x<0)
		return -1;
	else
		return 0;
}
void bres(int x1, int y1, int x2, int y2)
{
	int i,swap=0,temp,dx,dy,s1,s2,p,x,y;
	putpixel(x1+getmaxx()/2,getmaxy()/2-y1,WHITE);
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	s1=sign(x2-x1);
	s2=sign(y2-y1);
	x=x1;y=y1;

	if(dy>dx)
	{
		temp=dx;
		dx=dy;
		dy=temp;
		swap=1;
	}
	p=2*dy-dx;
	for(i=0;i<dx;i++)
	{
			putpixel(x+getmaxx()/2,getmaxy()/2-y,WHITE);
			
			while(p>0)
			{
				p=p-2*dx;
				if(swap==1)
					x=x+s1;
				else
					y=y+s2;
			}
			p=p+2*dy;
			if(swap==1)
					y=y+s2;
				else
					x=x+s1;
			
					
	}
putpixel(x+getmaxx()/2,getmaxy()/2-y,WHITE);	
}

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d:\\turboc3\\bgi");
	int x1,y1,x2,y2;
	bres(-100,100,200,-200);
	getch();
	closegraph();
	
}