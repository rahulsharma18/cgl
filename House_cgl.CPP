#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
int x=320,y=240,radius;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
line(100,100,100,200);
line(100,200,200,200);
line(200,200,200,100);
line(200,100,100,100);
line(140,200,140,140);
line(160,200,160,140);
line(140,140,160,140);
line(100,100,150,50);
line(200,100,150,50);
circle(150,80,10);

getch();
closegraph();
return 0;
}