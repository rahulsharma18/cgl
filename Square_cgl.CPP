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
getch();
closegraph();
return 0;
}