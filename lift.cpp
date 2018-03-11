#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int sign(x)
{
if(x>0)
return 1;
else if(x<0)
return -1;
else
return 0;
}

void blda(int x1, int y1, int x2, int y2)
{
int x,y,dx,dy,swap,temp,s1,s2,p,i;
x=x1;
y=y1;

dx=abs(x2-x1);
dy=abs(y2-y1);
s1=sign(x2-x1);
s2=sign(y2-y1);
swap=0;
putpixel(x1+getmaxx()/2,getmaxy()/2-y1,WHITE);
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
{
x+=s1;
}
else
y=y+s2;
}
p=p+2*dy;
if(swap==1)
{
y+=s2;
}
else
x=x+s1;
}
putpixel(x+getmaxx()/2,getmaxy()/2-y,WHITE);
}
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2;
initgraph(&gd,&gm,"d://turboc3//bgi");
int k=1;

char ch;
ch=getch();
if(ch==13)
{
while(kbhit()==0)
{

blda(-200,-100,-170,-100);
blda(-200,-100,-250,-50);
blda(-170,-100,-120,-50);
blda(-250,-50,-120,-50);

blda(-100,100,100,100);
blda(100,100,100,-100);
blda(100,-100,-100,-100);
blda(-100,-100,-100,100);
blda(0,100,0,-100);
blda(0,100,0,-100);


blda(200,-100,170,-100);
blda(200,-100,250,-50);
blda(170,-100,120,-50);
blda(250,-50,120,-50);

ch=getch();
if(ch==116)
{
for(k=0;k<=100;k++)
{



blda(-200,-100,-170,-100);
blda(-200,-100,-250,-50);
blda(-170,-100,-120,-50);
blda(-250,-50,-120,-50);

blda(-100,100,100,100);
blda(100,100,100,-100);
blda(100,-100,-100,-100);
blda(-100,-100,-100,100);
blda(0+k,100,0+k,-100);
blda(0-k,100,0-k,-100);


blda(200,-100,170,-100);
blda(200,-100,250,-50);
blda(170,-100,120,-50);
blda(250,-50,120,-50);


delay(10);
cleardevice();
}
}


blda(-200,-100,-170,-100);
blda(-200,-100,-250,-50);
blda(-170,-100,-120,-50);
blda(-250,-50,-120,-50);

blda(-100,100,100,100);
blda(100,100,100,-100);
blda(100,-100,-100,-100);
blda(-100,-100,-100,100);



blda(200,-100,170,-100);
blda(200,-100,250,-50);
blda(170,-100,120,-50);
blda(250,-50,120,-50);

ch=getch();
if(ch==115)
{
for(k=0;k<=100;k++)
{
blda(-200,-100,-170,-100);
blda(-200,-100,-250,-50);
blda(-170,-100,-120,-50);
blda(-250,-50,-120,-50);

blda(-100,100,100,100);
blda(100,100,100,-100);
blda(100,-100,-100,-100);
blda(-100,-100,-100,100);
blda(100-k,100,100-k,-100);
blda(-100+k,100,-100+k,-100);

blda(200,-100,170,-100);
blda(200,-100,250,-50);
blda(170,-100,120,-50);
blda(250,-50,120,-50);
delay(10);
cleardevice();
}
}
blda(-200,-100,-170,-100);
blda(-200,-100,-250,-50);
blda(-170,-100,-120,-50);
blda(-250,-50,-120,-50);

blda(-100,100,100,100);
blda(100,100,100,-100);
blda(100,-100,-100,-100);
blda(-100,-100,-100,100);
blda(0,100,0,-100);
blda(0,100,0,-100);


blda(200,-100,170,-100);
blda(200,-100,250,-50);
blda(170,-100,120,-50);
blda(250,-50,120,-50);
}
}
getch();
closegraph();
}