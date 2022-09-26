#include<stdio.h>
#include<conio.h>

main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    ellips(250,240,0,360,40,150);
    getch();
    closegraph();
}


