#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
class circle1
	{
	public:
	void cir()
		{
		float xc,yc,r,d,x,y;
		int gd=DETECT,gm;
		cout<<"Enter the values of xc,yc and r"<<endl;
		cin>>xc;
		cin>>yc;
		cin>>r;
		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
		x=0;
		y=r;
		d=3-2*r;
		while(x<=y)
			{
			putpixel(xc+x,yc+y,RED);
			putpixel(xc+y,yc+x,YELLOW);
			putpixel(xc+y,yc-x,RED);
			putpixel(xc+x,yc-y,YELLOW);
			putpixel(xc-x,yc-y,RED);
			putpixel(xc-y,yc-x,YELLOW);
			putpixel(xc-y,yc+x,RED);
			putpixel(xc-x,yc+y,YELLOW);
			x=x+1;
			if(d<0)
				{
				d=d+(4*x)+6;
				}
			else
				{
				d=d+4*(x-y)+10;
				y=y-1;
				}

			}
		getch();
		closegraph();
		}

void mp()
{
	float x,y,d,xc,yc,r;
	int gd=DETECT,gm;
	cout<<"Enter the values ofxc,yc and r"<<endl;
	cin>>xc;
	cin>>yc;
	cin>>r;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	x=0,y=r;
	d=1-r;
	while(x<=y)
		{
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+y,yc+x,YELLOW);
		putpixel(xc+y,yc-x,RED);
		putpixel(xc+x,yc-y,YELLOW);
		putpixel(xc-x,yc-y,RED);
		putpixel(xc-y,yc-x,YELLOW);
		putpixel(xc-y,yc+x,RED);
		putpixel(xc-x,yc+y,YELLOW);
		x=x+1;
		if(d<0)
			{
			d=d+2*(x)+3;
			}
		else
			{
			d=d+2*(x-y)+5;
			y=y-1;
			}
		}
		getch();
		closegraph();
	}
 };

int main()
{
circle1 obj;
int choice;
cout<<"1.Bresenhem's circle 2.Mid-point"<<endl;
cin>>choice;
switch(choice)
{
case 1:obj.cir();
	break;
case 2:obj.mp();
	break;
}
return 0;
}