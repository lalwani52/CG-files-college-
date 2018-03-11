#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
char ch;
int gd=DETECT,gm;
initgraph(&gd,&gm,"d:\\turboc3\\bgi");
circle(200,100,50);

ch=getch();
while(kbhit()==0)
{
ch=getch();
switch(ch)
{


case '32':
setfillstyle(SOLID_FILL,WHITE);
floodfill(200,100,WHITE);
break;

default:break;
}
}
closegraph();
}