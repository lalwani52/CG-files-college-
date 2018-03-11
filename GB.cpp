#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int ch,dx,dy,x,y,x1,y1,x2,y2,gdriver,gmode,s1,s2,temp,ex=0,p,i;
void gb(int x1,int y1,int x2,int y2)
{
dx=abs(x2-x1);
dy=abs(y2-y1);
x=x1;
y=y1;
s1=x2-x1;
s2=y2-y1;
if(s1<0)
s1=-1;
else if(s1>0)
s1=1;
if(s2<0)
s2=-1;
else if(s2>0)
s2=1;
if(dy>dx)
{
 temp=dx;
 dx=dy;
 dy=temp;
 ex=1;
}
else  {
ex=0;  }
p=(2*dy)-dx;
putpixel(x,y,WHITE);
for(i=1;i<=dx;i++){
while(p>=0)
{
 if(ex==1)
 x+=s1;
 else
 y+=s2;
p-=(2*dx);
}
if(ex==1)
y+=s2;
else
x+=s1;
p+=(2*dy);
putpixel(x,y,WHITE);
}
}

void obj()
{
gb(200,200,200,400);
gb(200,200,300,200);
gb(300,200,400,200);
gb(200,400,400,400);
gb(400,200,400,400);
gb(100,400,130,400);
gb(100,400,70,350);
gb(130,400,160,350);
gb(70,350,160,350);
setfillstyle(1,BROWN);
floodfill(120,380,WHITE);
}


void main()
{
int i;
char ch;
gdriver=DETECT;
initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");

ch=115;
while(ch!=13)
{
obj();
ch=getch();
for(i=0;i<100;i++)
{
if(ch==116)
{
obj();
gb(300-i,200,300-i,400);
gb(300+i,200,300+i,400);
delay(10);
cleardevice();
}
if(ch==111)
{
obj();
gb(200+i,200,200+i,400);
gb(400-i,200,400-i,400);
delay(10);
cleardevice();
if(i==99)
gb(300,200,300,400);
}
}
}
getch();
closegraph();
}