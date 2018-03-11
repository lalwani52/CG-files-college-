  #include <stdio.h>
  #include <conio.h>
  #include <graphics.h>
  #include <dos.h>


       void mpcirc(int radius,int xc, int yc)
{
		int midx, midy, x, y, dp;
	
	midx =xc+ getmaxx() / 2;

	midy = getmaxy() / 2-yc;

	dp = 1 - radius;
	x = 0, y = radius;

	do {
		
		putpixel(midx + x, midy + y, WHITE);
		putpixel(midx - x, midy + y, WHITE);
		putpixel(midx + x, midy - y, WHITE);
		putpixel(midx - x, midy - y, WHITE);
		putpixel(midx + y, midy + x, WHITE);
		putpixel(midx - y, midy + x, WHITE);
		putpixel(midx + y, midy - x, WHITE);
		putpixel(midx - y, midy - x, WHITE);


		
		x = x + 1;
		if (dp < 0) {
			dp = dp + 2 * x + 1;
		} 
		
		else 
		{
			y = y - 1;
			dp = dp + 2 * (x - y) + 1;
		}

	} while (x < y);

	}
	void main() {
	int gdriver = DETECT, gmode;
	int radius;
	initgraph(&gdriver, &gmode, "d:/TURBOC3/BGI");
	mpcirc(50,50,50);

setfillstyle(SOLID_FILL,RED);
floddfill(50,50,WHITE);
	getch();
	closegraph();
	}