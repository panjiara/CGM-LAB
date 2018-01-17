#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
int main()
{

    int gdriver=DETECT,gmode;
    int x,y,i,r,a,b;
    float PI=3.14;
    initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
    x=getmaxx()/2;
    y=getmaxy()/2;
    for(i=40;i<100;i++)
    {
        delay(100);
        setcolor(COLOR(255,153,51));
        line(50,i,300,i);

        setcolor(WHITE);
        line(50,i+60,300,i+60);
        setcolor(GREEN);

      line(50,i+120,300,i+120);

    }
    setcolor(BLUE);
    a=175;	//center
	b=130;	//center
	r=25;	//radius
	setcolor(BLUE);
	circle(a,b,r);

    for(i=0;i<=360;i=i+15)
	{
		x=r*cos(i*PI/180);
		y=r*sin(i*PI/180);
		line(a,b,a+x,b-y);
	}
	setcolor(RED);
	line(50,220,50,400);

    getch();



}
