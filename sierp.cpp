#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<graphics.h>

void sierpinski(int x1,int y1,int x2,int y2,int x3,int y3,int n)
{
int xa,xb,xc,ya,yb,yc;
xa=(x1+x2)/2;
xb=(x1+x3)/2;
xc=(x2+x3)/2;
ya=(y1+y2)/2;
yb=(y1+y3)/2;
yc=(y2+y3)/2;

	if(n>0)
	{
			sierpinski(x1,y1,xa,ya,xb,yb,n-1);
			sierpinski(xa,ya,x2,y2,xc,yc,n-1);
			sierpinski(xb,yb,xc,yc,x3,y3,n-1);

			line(x1,y1,x2,y2);
			line(x2,y2,x3,y3);
			line(x3,y3,x1,y1);

	}

}
void main()
{
int n;
int gd=DETECT,gm;
initgraph(&gd,&gm,"d:\\turboc3\\bgi");
printf("Enter the ordeer:\n");
scanf("%d",&n);
sierpinski(100,300,500,300,300,50,n);


getch();
closegraph();
}
