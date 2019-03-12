
#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
class graph
{
 public:
 int k,x1,x2,y1,y2,dx,dy,step,xi,yi,x,y,gm,gd,c1,c2,d,m;
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
 void bres()
 {
cout<<"Enter the initial and final coordinates";
cin>>x1>>y1>>x2>>y2;
initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
dx = x2-x1;
dy = y2-y1;
m=dy/dx;
if(m<=1)
{
c1=2*(dy-dx);
c2=2*(dy);
d=2*(dy)-dx;
x=x1;y=y1;
putpixel(x,y,RED);

do
{x=x+1;
if(d<0)
{d=d+c2;
}
else
{

d=d+c1;y=y+1;
}
putpixel(x,y,GREEN);
}while(x<=x2);
 }
 else
 {
   c1=2*(dx-dy);
c2=2*(dx);
d=2*(dx)-dy;
x=x1;y=y1;
putpixel(x,y,RED);

do
{y=y+1;
if(d<0)
{d=d+c2;
}
else
{
d=d+c1;x=x+1;
}
putpixel(x,y,GREEN);
}while(y<=y2);
}
 getch();
 closegraph();
}
};
int main()

{int l;
graph q;
do
{
cout<<"\nEnter your choice";
cout<<"\nPress 1 for DDA";
cout<<"\nPress 2 for BRES";
cout<<"\nPress 3 for EXIT";
cin>>l;
 switch(l)
 {
  case 1:
 q.dda();
 break;
 case 2:
 q.bres();
 break;
 case 3:
 break;
 }
 }while(l!=3);
 return 0;
}