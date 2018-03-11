#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d:\\turboc3\\bgi");
	float xmin,ymin,xmax,ymax,x1,y1,x2,y2,m,i,code[4];
	float begin[4],end[4];
	printf("enter coords of rect");
	printf("Enter xmin , ymin");
	scanf("%f %f",&xmin,&ymin);
	printf("Enter xmax , ymax");
	scanf("%f %f",&xmax,&ymax);
	printf("Enter x1,y1");
	scanf("%f %f",&x1,&y1);
	printf("Enter x2,y2");
	scanf("%f %f",&x2,&y2);
	
	
	for(i=0;i<4;i++)
	{
		begin[i]=0;
		end[i]=0;
	}
	
	m=(y2-y1)/(x2-x1);
	if(x1 <xmin) begin[0]=1;
if(x1 >xmax) begin[1]=1;
if(y1 <ymin) begin[2]=1;
if(y1 >ymax) begin[3]=1;
if(x2 <xmin) end[0]=1;
if(x2 >xmax) end[1]=1;
if(y2 <ymin) end[2]=1;
if(y2 >ymax) end[3]=1;
	
	for(i=0;i<4;i++)
	{
		code[i]=begin[i]&&end[i];	
	}	
	if((code[0]==0)&&(code[1]==0)&&(code[2]==0)&&(code[3]==0))
{
if((begin[0]==0)&&(begin[1]==0)&&(begin[2]==0)&&(begin[3]==0)&&(end[0]==0)&&(end[1]==0)&&(end[2]==0)&&(end[3]==0))
{
			cleardevice();
    printf("\n\t\tThe line is totally visible\n\t\tand not a clipping candidate");
    rectangle(xmin,ymin,xmax,ymax);
    line(x1,y1,x2,y2);
    getch();
		}
		else{
	  cleardevice();
    printf("\n\t\tLine is partially visible");
    rectangle(xmin,ymin,xmax,ymax);
    line(x1,y1,x2,y2);
    getch();
		if((begin[2]==1)&&(begin[3]==0))
{
     x1=x1+(ymin-y1)/m;
     y1=ymin;
}
if((end[2]==1)&&(end[3]==0))
{
     x2=x2+(ymin-y2)/m;
     y2=ymin;
}
if((begin[2]==0)&&(begin[3]==1))
{
     x1=x1+(ymax-y1)/m;
     y1=ymax;
}
if((end[2]==0)&&(end[3]==1))
{
     x2=x2+(ymax-y2)/m;
     y2=ymax;
}
if((begin[1]==0)&&(begin[0]==1))
{
     y1=y1+m*(xmin-x1);
     x1=xmin;
}
if((end[1]==0)&&(end[0]==1))
{
     y2=y2+m*(xmin-x2);
     x2=xmin;
}
if((begin[1]==1)&&(begin[0]==0))
{
     y1=y1+m*(xmax-x1);
     x1=xmax;
}
if((end[1]==1)&&(end[0]==0))
{
     y2=y2+m*(xmax-x2);
     x2=xmax;
}

clrscr();
cleardevice();
printf("\n\t\tAfter clippling:");
rectangle(xmin,ymin,xmax,ymax);
line(x1,y1,x2,y2);
getch();
}
}
else
{
    clrscr();
    cleardevice();
    printf("\nLine is invisible");
    rectangle(xmin,ymin,xmax,ymax);
}
getch();
closegraph();
}