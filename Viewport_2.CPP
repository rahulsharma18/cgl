# include<stdio.h>
# include<graphics.h>
#include<iostream.h>
#include<conio.h>
int main()
{
float wxmin,wymin,wxmax,wymax;
float vxmin,vymin,vxmax,vymax;
int gd=DETECT,gm;
float x1,y1,x2,y2,vx1,vx2,vy1,vy2;
cout<<"ENTER THE COORDINATES OF WINDOW";
cout<<"\n\t wxmin,wymin: ";
cin>>wxmin>>wymin;
cout<<"\n\t wxmax,wymax: ";
cin>>wxmax>>wymax;
cout<<"ENTER THE COORDINATES OF VIEW";
cout<<"vxmin,vymin: ";
cin>>vxmin>>vymin;
cout<<"\n\t vxmax,vymax: ";
cin>>vxmax>>vymax;
cout<<"ENTER THE COORDINATES OF LINE: ";
cout<<" X1 Y1: ";
cin>>x1>>y1;
cout<<"X2 Y2: ";
cin>>x2>>y2;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
rectangle(wxmin,wymin,wxmax,wymax);
rectangle(vxmin,vymin,vxmax,vymax);
line(x1,y1,x2,y2);
vx1=((vxmax-vxmin)/(wxmax-wxmin))*(x1-wxmin)+vxmin;
vy1=((vxmax-vxmin)/(wxmax-wxmin))*(y1-wxmin)+vxmin;
vx2=((vxmax-vxmin)/(wxmax-wxmin))*(x2-wxmin)+vxmin;
vy2=((vxmax-vxmin)/(wxmax-wxmin))*(y2-wxmin)+vxmin;
line(vx1,vy1,vx2,vy2);
getch();
closegraph();
return 0;
}