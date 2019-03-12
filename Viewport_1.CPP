#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<iostream.h>
int main()
{ int gd=DETECT,gm;
float  xwmin,ywmin,xwmax,ywmax;
float  xvmin,yvmin,xvmax,yvmax;
float x1,y1,x2,y2;
float x,y,xv,yv,xv2,yv2;
cout<<"Enter the coordinates of the window xwmin,ywmin,xwmax,ywmax";
cin>>xwmin>>ywmin>>xwmax>>ywmax;
cout<<"Enter the coordinate sof the viewport xvmin,yvmin,xvmax,yvmax";
cin>> xvmin>>yvmin>>xvmax>>yvmax;
cout<<"Enter the coordinate of the linex1,y1,x2,y2";
cin>>x1>>y1>>x2>>y2;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(xwmin,ywmin,xwmax,ywmax);
rectangle(xvmin,yvmin,xvmax,yvmax);
line(x1,y1,x2,y2);
 x=(xvmax-xvmin)/(xwmax-xwmin);
 y=(yvmax-yvmin)/(ywmax-ywmin);
 xv=x*(x1-xwmin)+xvmin;
 yv=y*(y1-ywmin)+yvmin;
 xv2=x*(x2-xwmin)+xvmin;
 yv2=y*(y2-ywmin)+yvmin;
 line(xv,yv,xv2,yv2);
 getch();
 closegraph();
 return 0;
 }