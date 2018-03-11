#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void dlda(int x1, int y1, int x2, int y2)
{
int dl,i,x,y,dx,dy;
putpixel(x1,y1,WHITE);
if(abs(x2-x1)>=abs(y2-y1))
{
dl=abs(x2-x1);
}
else
{
dl=abs(y2-y1);
}
dx=(x2-x1)/dl;
dy=(y2-y1)/dl;
x=x1;
y=y1;
i=1;
while(i<=dl)
{
putpixel(x,y,WHITE);
x=x+dx;
y=y+dy;
i++;
}
}
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2;
initgraph(&gd,&gm,"d://turboc3//bgi");
dlda(100,100,200,200);
getch();
closegraph();
}