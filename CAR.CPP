#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"d:\\turboc3\\bgi");
int j=1;


char ch;
ch=getch();
while(kbhit()==0)
{

if(ch==116)
{

/***CAR BODY ******/
setcolor(CYAN);
line(50+j,470,90+j,470);
arc(110+j,470,0,180,20);
line(130+j,470,220+j,470);
arc(240+j,470,0,180,20);
line(260+j,470,300+j,470);
line(300+j,470,300+j,450);
line(300+j,450,240+j,430);
line(240+j,430,200+j,400);
line(200+j,400,110+j,400);
line(110+j,400,80+j,430);
line(80+j,430,50+j,440);
line(50+j,440,50+j,470);
//COLOR
setfillstyle(SOLID_FILL,CYAN);
floodfill(100+j,435,CYAN);


/***CAR Windows***/
setcolor(WHITE);
line(165+j,405,165+j,430);
line(165+j,430,230+j,430);
line(230+j,430,195+j,405);
line(195+j,405,165+j,405);
//COLOR
setfillstyle(SOLID_FILL,WHITE);
floodfill(200+j,410,WHITE);
setcolor(WHITE);
line(160+j,405,160+j,430);
line(160+j,430,95+j,430);
line(95+j,430,120+j,405);
line(120+j,405,160+j,405);
//COLOR
setfillstyle(SOLID_FILL,WHITE);
floodfill(140+j,410,WHITE);


/**Wheels**/
circle(110+j,470,17);
circle(240+j,470,17);

j++;

delay(10);
cleardevice();
}
}
closegraph();
}