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
	int x1,x2,x3,y1,y2,y3;
	int x1dash,x2dash,x3dash,y1dash,y2dash,y3dash;
	double theta;
	int midx=getmaxx()/2;
	int midy=getmaxy()/2;
	
	char ch;
	
		 x1=y1=50;
  x2=y2=100;
 x3=150;   y3=50;
 


printf("Reflection about \n");
printf("X axis :  1\n");
printf("Y axis : 2\n");
printf("X=Y axis : 3\n");


while(ch!='e')
{
	 line(midx+x1,midy-y1,midx+x2,midy-y2);
 line(x2+midx,midy-y2,x3+midx,midy-y3);
line(x3+midx,midy-y3,x1+midx,midy-y1);
switch(ch)
{
	case 'x': y1=-y1;y2=-y2;y3=-y3;
	break;
	
	case 'y': x1=-x1;x2=-x2;x3=-x3;
	break;
	
	case 'o':
	y1=-y1;y2=-y2;y3=-y3;
	theta=90*3.14/180;
	x1dash=x1*cos(theta)-y1*sin(theta);
		x2dash=x2*cos(theta)-y2*sin(theta);
			x3dash=x3*cos(theta)-y3*sin(theta);
	y1dash=x1*sin(theta)+y1*cos(theta);
	y2dash=x2*sin(theta)+y2*cos(theta);
	y3dash=x3*sin(theta)+y3*cos(theta);	
	  x1=x1dash;x2=x2dash;x3=x3dash;
    y1=y1dash;y2=y2dash;y3=y3dash;
	
}
	 line(midx+x1,midy-y1,midx+x2,midy-y2);
 line(x2+midx,midy-y2,x3+midx,midy-y3);
line(x3+midx,midy-y3,x1+midx,midy-y1);
ch=getch();
}
getch();
closegraph();
}