#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
class graph
{
 public:
 int k,x1,x2,y1,y2,dx,dy,step,xi,yi,x,y,gm,gd;
 graph()
 {
  gd = DETECT;
 }
 void dda()
 {
 cout<<"Enter the initial x,y coordinates";
 cin>>x1>>y1>>x2>>y2;
 initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
 dx = x2-x1;
 dy = y2-y1;
 if(abs(dx) >= abs(dy))
 {
  step = abs(dx);
 }
 else
 {
  step = abs(dy);
 }
 xi = abs(dx)/step;
 yi = abs(dy)/step;
 x = x1;
 y = y1;
 putpixel(x,y,RED);

 for(k=1;k<=step;k++)
 {
  x = x+xi;
  y = y+yi;
  putpixel(x,y,GREEN);
 }
 getch();
 closegraph();

 }
};
int main()
{
 graph q;
 q.dda();
 return 0;
}