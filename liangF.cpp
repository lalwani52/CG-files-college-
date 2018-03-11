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
	 int x1,y1,x2,y2,xmin,xmax,ymin,ymax,xx1,xx2,yy1,yy2,dx,dy,i;
    float t1,t2,p[4],q[4],temp;
	

    x1=100;
    y1=100;
    x2=400;
    y2=400;
    
    xmin=200;
    ymin=200;
    xmax=300;
    ymax=300;
		dx=x2-x1;
	dy=y2-y1;
 
	rectangle(xmin,ymin,xmax,ymax);
   p[0]=-dx;
    p[1]=dx;
    p[2]=-dy;
    p[3]=dy;
    
    q[0]=x1-xmin;
    q[1]=xmax-x1;
    q[2]=y1-ymin;
    q[3]=ymax-y1;
	
	for(i=0;i<4;i++)
	{
		if(p[i]==0)
		{
			printf("line is parallel");
		
		if(q[i]>=0)
		{
			if(i<2)
			{
				if(y1<ymin)
				{
					y1=ymin;
				}
				if(y2>ymax)
				{
					y2=ymax;
				}
				line(x1,y1,x2,y2);
			}
			
			if(i>1)
			{
				if(x1<xmin)
				{
					x1=xmin;
				}
				if(x2>xmax)
				{
					x2=xmax;
				}
				line(x1,y1,x2,y2);
			}
		}
	
		}
		
	}
	
	t1=0;
	t2=1;
	for(i=0;i<4;i++)
	{
		temp=q[i]/p[i];
		if(p[i]<0)
		{
			if(temp>=t1)
			{
				t1=temp;
			}
		}	
		else
			if(temp<=t2)
			{
				t2=temp;
			}
			
		
	}
	
	if(t2>t1)
	{
		xx1=x1+t1*p[1];
		yy1=y1+t1*p[3];
		xx2=x1+t2*p[1];
		yy2=y1+t2*p[3];
		line(xx1,yy1,xx2,yy2);
	}
	getch();
	closegraph();
}