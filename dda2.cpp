#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
void main()	{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..//bgi");
	int x1,y1,x2,y2,steps,n,w,i,wn,j;
	float xincr,yincr,xi,yi;
	do	{
		printf("Enter choice:\n1.Simple\t2.Dotted\t3.Dash\t4.Thick\n");
		scanf("%d",&n);
		printf("Enter x1 and y1:\n");
		scanf("%d%d",&x1,&y1);
		printf("Enter x2 and y2:\n");
		scanf("%d%d",&x2,&y2);
		putpixel(x1,y1,WHITE);
		switch(n)	{
			case 1:
				if(abs(x2-x1)>=abs(y2-y1))
					steps = abs(x2-x1);
				else
					steps = abs(y2-y1);
				xincr = (x2-x1)/steps;
				yincr = (y2-y1)/steps;
				xi = x1,yi = y1;
				for(i=0;i<steps;i++)	{
					xi = xi + xincr;
					yi = yi + yincr;
					putpixel((int)(xi+0.5),(int)(yi+0.5),WHITE);
					delay(500);
				}
				break;
			case 2:
				if(abs(x2-x1)>=abs(y2-y1))
					steps = abs(x2-x1);
				else
					steps = abs(y2-y1);
				xincr = (x2-x1)/steps;
				yincr = (y2-y1)/steps;
				xi = x1,yi = y1;
				for(i=0;i<steps;i++)	{
					xi = xi + xincr;
					yi = yi + yincr;
					if(i%2==0)
						putpixel((int)(xi+0.5),(int)(yi+0.5),WHITE);
					delay(500);
				}
				break;
			case 3:
				if(abs(x2-x1)>=abs(y2-y1))
					steps = abs(x2-x1);
				else
					steps = abs(y2-y1);
				xincr = (x2-x1)/steps;
				yincr = (y2-y1)/steps;
				xi = x1,yi = y1;
				for(i=0;i<steps;i++)	{
					xi = xi + xincr;
					yi = yi + yincr;
					if((i%10)<5)
						putpixel((int)(xi+0.5),(int)(yi+0.5),WHITE);
					delay(500);
				}
				break;
			case 4:
				printf("Enter the width\n");
				scanf("%d",&w);
					if(abs(x2-x1)>=abs(y2-y1))
					steps = abs(x2-x1);
				else
					steps = abs(y2-y1);
				xincr = (x2-x1)/steps;
				yincr = (y2-y1)/steps;
				if(w%2==1)
					wn = (int)(w/2);
				else
					wn = w/2;
				if(w%2==1)	{
					for(j=1;j<=wn;j++)	{
						putpixel(x1,y1+j,WHITE);
						putpixel(x1,y1-j,WHITE);
					}
				}
				else	{
					for(j=1;j<=wn-1;j++)	{
						putpixel(x1,y1+j,WHITE);
						putpixel(x1,y1-j,WHITE);
					}
				 }
				 xi = x1;
				 yi = y1;
				 putpixel(x1,y1+wn,WHITE);
				 for(i=1;i<=steps;i++)	{
					 xi = xi + xincr;
					 yi = yi + yincr;
					 putpixel((int)(xi+0.5),(int)(yi+0.5),WHITE);
					 if(w%2==1)	{
						for(j=1;j<wn;j++)	{
							putpixel(xi,yi+j,WHITE);
							putpixel(xi,yi-j,WHITE);
						}
					 }
					 else	{
						for(j=1;j<wn-1;j++)	{
							putpixel(xi,yi+j,WHITE);
							putpixel(xi,yi-j,WHITE);
						}
					 }
				 delay(300);
				}
				break;
			case 5:
				printf("Thank you\n");
				break;
			default:
				printf("Invalid choice\n");
				break;
			}
		}while(n!=5);

	getch();
	closegraph();
}