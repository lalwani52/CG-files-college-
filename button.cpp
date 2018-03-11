#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d://turboc3//bgi");
	char ch;
	while(ch!='e')
	{
		circle(100,100,20);
		circle(200,120,20);
		circle(300,140,20);
		circle(400,160,20);
		switch(ch)
		{
			case 'r':
			setfillstyle(SOLID_FILL,RED);
			floodfill(200,120,WHITE);
			setfillstyle(SOLID_FILL,BLACK);
			floodfill(100,100,WHITE);
			floodfill(400,160,WHITE);floodfill(300,140,WHITE);
			break;
			
			case 'g':
			setfillstyle(SOLID_FILL,GREEN);
				floodfill(200,120,WHITE);floodfill(100,100,WHITE);
			floodfill(400,160,WHITE);floodfill(300,140,WHITE);;
			break;
			
			case 'y':
			setfillstyle(SOLID_FILL,YELLOW);
				floodfill(200,120,WHITE);floodfill(100,100,WHITE);
			floodfill(400,160,WHITE);floodfill(300,140,WHITE);
			break;
			
			default: break;
		}
		ch=getch();
	}
	getch();
	closegraph();
}