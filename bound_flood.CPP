#include<graphics.h>
#include<iostream.h>
#include<conio.h>
class fill
{
public:
int color;
void boundary_fill(int x,int y,int f_color,int b_color)
{
if(getpixel(x,y)!=b_color&&getpixel(x,y)!=f_color)
{
  putpixel(x,y,GREEN);
  boundary_fill(x+1,y,f_color,b_color);
  boundary_fill(x,y+1,f_color,b_color);
  boundary_fill(x-1,y,f_color,b_color);
  boundary_fill(x,y-1,f_color,b_color);
}
}
void flood_fill(int x,int y,int new_color,int old_color)
 {
 color= getpixel(x,y);
  if(color==old_color)
 {
 putpixel(x,y,new_color);
 flood_fill(x+1,y,new_color,old_color);
 flood_fill(x-1,y,new_color,old_color);
 flood_fill(x,y+1,new_color,old_color);
 flood_fill(x,y-1,new_color,old_color);
 }
}

};
int main()
{
fill q;
int gd=DETECT,gm,x,y,r,ch;
cout<<"Enter the circle centre and radius";
cin>>x>>y>>r;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
circle(x,y,r);
do{
cout<<"\n Enter 1 for Boundary Fill ";
cout<<"\n Enter 2 for Flood Fill \n" ;
cin>>ch;
switch(ch)
{
case 1:

q.boundary_fill(x,y,GREEN,WHITE);
break;

case 2:
q.flood_fill(x,y,GREEN,BLACK);
break;

case 3:
break;
}
cin>>ch;
}while(ch!=3);
getch();
closegraph();
return 0;
}
