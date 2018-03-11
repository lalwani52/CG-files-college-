#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm;
char ch;
initgraph(&gd,&gm,"D:\\TurboC3\\BGI");

while(ch!='e')
{
cleardevice();
rectangle(50,150,100,50);
line(75,150,75,450);
line(85,150,85,450);
circle(75,75,10);
circle(75,100,10);
circle(75,125,10);

switch(ch)
{
case 'r':setfillstyle(SOLID_FILL,RED);
circle(75,75,10);
floodfill(75,75,WHITE);
circle(75,100,10);
circle(75,125,10);
break;
case 'g':setfillstyle(SOLID_FILL,GREEN);
circle(75,75,10);
circle(75,100,10);
floodfill(75,75,WHITE);
circle(75,125,10);
break;
case 'y':setfillstyle(SOLID_FILL,YELLOW);
circle(75,75,10);
circle(75,100,10);
circle(75,125,10);
floodfill(75,75,WHITE);
break;
default:break;
}
ch=getch();

}
getch();

}

