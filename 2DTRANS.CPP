 #include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
void main()
{
            int gm;
            int gd=DETECT;
            int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c;
            int sx,sy,xt,yt,r;
            float t;
            initgraph(&gd,&gm,"C:\\TC\\BGI");
            printf("\t Program for basic transactions");
            printf("\n\t Enter the points of triangle");
            setcolor(1);
            scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
            line(x1,y1,x2,y2);
            line(x2,y2,x3,y3);
            line(x3,y3,x1,y1);
            getch();
            printf("\n 1.Transaction\n 2.Rotation\n 3.Scalling\n 4.shearing\n 5.reflection\n 6.exit");
            printf("Enter your choice:");
            scanf("%d",&c);
            switch(c)
            {
                        case 1:
                                    printf("\n Enter the translation factor");
                                    scanf("%d%d",&xt,&yt);
                                    nx1=x1+xt;
                                    ny1=y1+yt;
                                    nx2=x2+xt;
                                    ny2=y2+yt;
                                    nx3=x3+xt;
                                    ny3=y3+yt;
                                    line(nx1,ny1,nx2,ny2);
                                    line(nx2,ny2,nx3,ny3);
                                    line(nx3,ny3,nx1,ny1);
                                    getch();

                        case 2:
                                    printf("\n Enter the angle of rotation");
                                    scanf("%d",&r);
                                    t=3.14*r/180;
                                    nx1=abs(x1*cos(t)-y1*sin(t));
                                    ny1=abs(x1*sin(t)+y1*cos(t));
                                    nx2=abs(x2*cos(t)-y2*sin(t));
                                    ny2=abs(x2*sin(t)+y2*cos(t));
                                    nx3=abs(x3*cos(t)-y3*sin(t));
                                    ny3=abs(x3*sin(t)+y3*cos(t));
                                    line(nx1,ny1,nx2,ny2);
                                    line(nx2,ny2,nx3,ny3);
                                    line(nx3,ny3,nx1,ny1);
                                    getch();

                        case 3:
                                    printf("Enter scaling co-ordinates ");
printf("sx,sy");
scanf("%d%d",&sx,&sy);
nx1=(x1*sx);
ny1=(y1*sy);
nx2=(x2*sx);
ny2=(y2*sy);
//printf("Line after scaling");
line(nx1,ny1,nx2,ny2);
nx2=(x2*sx);
ny2=(y2*sy);
nx3=(x3*sx);
ny3=(y3*sy);
line(nx2,ny2,nx3,ny3);
nx3=(x1*sx);
ny3=(y1*sy);
nx1=(x2*sx);
ny1=(y2*sy);
  line(nx3,ny3,nx1,ny1);
                                    getch();




case 4:
int ch2;
printf("*******Shearing******\n\n");
printf("1.x-direction shear\n2.y-direction shear\nEnter your choice:\n");
scanf("%d",&ch2);
switch(ch2)
{
case 1:
printf("Enter the value of shear:\n");
scanf("%d",&sx);
nx1=x1+(y1*sx);
ny1=y1;
nx2=x2+(y2*sx);
ny2=y2;
line(nx1,ny1,nx2,ny2);
nx2=x2+(y2*sx);
ny2=y2;
nx3=x3+(y3*sx);
ny3=y3;
line(nx2,ny2,nx3,ny3);
nx3=x3+(y3*sx);
ny3=y3;
nx1=x1+(y1*sx);
ny1=y1;
line(nx3,ny3,nx1,ny1);
getch();
break;

case 2:
printf("Enter the value of shear:\n");
scanf("%d",&sy);
nx1=x1;
ny1=y1+(x1*sy);
ny2=x1;
ny2=y1+(x1*sy);
line(nx1,ny1,nx2,ny2);
nx2=x2;
ny2=y2+(x2*sy);
ny3=x3;
ny3=y3+(x3*sy);
line(nx2,ny2,nx3,ny3);
nx3=x3;
ny3=y3+(x3*sy);
ny1=x1;
ny1=y1+(x1*sy);
line(nx3,ny3,nx1,ny1);
break;
}
case 5:// int x1=10,y1=10,x2=5,y2=20,x3=15,y3=20;
cleardevice();
line(x1,-y1+200,x2,-y2+200);
line(x1,-y1+200,x3,-y3+200);
line(x2,-y2+200,x3,-y3+200);
getch();
break


                        case 6:
                                    break;
                        default:
                                    printf("Enter the correct choice");
                                    }
                                    closegraph();
                                    }