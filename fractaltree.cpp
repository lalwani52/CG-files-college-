#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void fractal(int l, double a, int x, int y)
{
double angle=(30*3.14/180);
if(l!=0)
{
double a1=a+angle;
double a2=a-angle;
int x1=x+l*cos(a1);
int y1=y-l*sin(a1);
setcolor(YELLOW);
line(x,y,x1,y1);
fractal(l/2,a1,x1,y1);
x1=x+l*cos(a2);
y1=y-l*sin(a2);
line(x,y,x1,y1);
fractal(l/2,a2,x1,y1);
a1=a1+angle;
a2=a2-angle;
x1=x+l*cos(a1);
y1=y-l*sin(a1);
line(x,y,x1,y1);
fractal(l/2,a1,x1,y1);
x1=x+l*cos(a2);
y1=y-l*sin(a2);
setcolor(GREEN);
line(x,y,x1,y1);
fractal(l/2,a2,x1,y1);
}
}

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"d:\\turboc3\\bgi");
while(kbhit()==0)
{
//frac tree

fractal(50,90*3.14/180,550,435);

fractal(50,90*3.14/180,50,435);
}
}