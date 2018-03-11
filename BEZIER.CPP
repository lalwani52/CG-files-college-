#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void bez(int x[4], int y[4])
{
int px,py;
double t;
for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
py=(1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
delay(2);
}
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"d:\\turboc3\\bgi");
int x[4],y[4];
x[0]=20;
y[0]=200;
x[1]=40;
y[1]=300;
x[2]=80;
y[2]=30;
x[3]=50;
y[3]=400;
bez(x,y);
x[0]=200;
y[0]=200;
x[1]=40;
y[1]=300;
x[2]=80;
y[2]=30;
x[3]=50;
y[3]=400;
bez(x,y);
getch();
closegraph();
}