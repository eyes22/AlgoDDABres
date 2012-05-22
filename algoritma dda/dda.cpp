/*
  Projek   : Aplikasi Algoritma DDA
  Tugas    : Grafika Komputer
  Kelompok : Giri Supangkat   10108423
             Wanda            10108419
             Muzakki Fadhi    10108414
             Rizal Rismawan   10108389
             Ringga Anggiat S 10107569
             
*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#define round(val) (int)(val+0.5)

int main()
{
     int gd=DETECT,gm;
     void line_dda(int,int,int,int);
     int xa,xb,ya,yb;
     printf("Algoritma DDA \n");
     printf("Masukkan nilai dari : \n"); 
     printf("X1: ");scanf("%d",&xa);
     printf("Y1: ");scanf("%d",&ya);
     printf("X2: ");scanf("%d",&xb);
     printf("Y2: ");scanf("%d",&yb); 
     initgraph(&gd,&gm,"");
     cleardevice();
     line_dda(xa,ya,xb,yb);
     getch();
     closegraph();
}

void line_dda(int xa,int ya,int xb,int yb)
{
     int Dx=xb-xa,Dy=yb-ya,steps,k;
     float xin,yin,X=xa,Y=ya;
     if(abs(Dx)>abs(Dy))
            steps=abs(Dx);
     else
            steps=abs(Dy);

     xin=Dx/(float)steps;
     yin=Dy/(float)steps;
     putpixel(round(X),round(Y),6);

     for(k=0;k<steps;k++)
     {
            X=X+xin;
            Y=Y+yin;
            putpixel(round(X),round(Y),6);
     }
}
