/*
  Projek   : Aplikasi Algoritma Bresenham
  Tugas    : Grafika Komputer
  Kelompok : Giri Supangkat   10108423
             Wanda            10108419
             Muzakki Fadhi    10108414
             Rizal Rismawan   10108389
             Ringga Anggiat S 10107569
             
*/


#include <stdio.h>
#include <conio.h>
#include <graphics.h>


int main()
{
     int gdriver = DETECT, gnode;
     int dx, dy, p, end;
     float x1, x2, y1, y2, x, y;
     initgraph(&gdriver, &gnode, "");
     printf("Algoritma Bresenham \n");
     printf("Masukan nilai x1 : \n");
     scanf("%f", &x1);
     printf("Masukan nilai y1 : ");
     scanf("%f", &y1);
     printf("Masukin nilai x2: ");
     scanf("%f", &x2);
     printf("Masukan nilai y2: ");
     scanf("%f", &y2);
     
     dx = abs(x1 - x2);
     dy = abs(y1 - y2);
     p=2 * dy -dx;
     if(x1 > x2)
     {
           x = x2;
           y = y2;
           end = x1;
     }
     else
     {
           x = x1;
           y = y1;
           end = x2;
     }
     putpixel(x, y, 10);
     while(x < end)
     {
           x = x + 1;
           if(p<0)
           {
                  p=p + 2 * dy;
           } 
           else
           {
                  y=y+1;
                  p=p+2*(dy-dx);
           } 
           
           putpixel(x,y,10);
     }
     getch();
     closegraph();
     
    system("PAUSE");
    return EXIT_SUCCESS;
}
