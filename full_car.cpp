/* this project is based on a moving car with moving aeroplane and sun and
    after the car reaches the end point it stop moving. Digital clock is also
    displayed in this project. This whole project is written C++ graphics.
*/

#include<graphics.h>
#include<time.h>
#include<stdio.h>
int main()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\Program Files (x86)\\CodeBlocks-EP\\MinGW\\bin\\BGI");
    initwindow(1300,600);

    int maxX=getmaxx();
    int maxY=getmaxy();
    int width=textwidth("PRESS ANY KEY TO VIEW PROJECT");
    int height=textheight("PRESS ANY KEY TO VIEW PROJECT");
    settextstyle(3,HORIZ_DIR,2);
    setcolor(BLUE);
    outtextxy(maxX/2-width/2,maxY/2-height/2,"PRESS ANY KEY TO VIEW PROJECT");
    getch();
    cleardevice();




    for(int i=0;i<maxX;i++)
    {
    // digital_Clock
    time_t rawtime;
    struct tm *currenttime;
    rawtime=time(NULL);
    currenttime=localtime(&rawtime);
    char a[100];
    strftime(a,100,"%I:%M:%S",currenttime);
    setcolor(RED);
    outtextxy(maxX-100,10,a);

    strftime(a,100,"%a %d %b,%y",currenttime);
    setcolor(YELLOW);
    outtextxy(maxX-120,30,a);

    // grass
    setcolor(GREEN);
    arc(400,380,90,270,40);
    arc(440,340,0,180,40);
    arc(480,380,270,90,40);
    line(400,420,480,420);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(440,380,GREEN);

    // cloud

    setcolor(LIGHTBLUE);
    arc(350,100,90,270,30);
    arc(380,70,0,180,30);
    arc(440,70,0,180,30);
    arc(470,100,270,90,30);
    arc(380,130,180,360,30);
    arc(440,130,180,360,30);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(440,100,LIGHTBLUE);


    //car


    if(i>=880)
    {
    setcolor(WHITE);
    line(20+880,400,60+880,400);
    arc(85+880,400,0,180,25);
    line(110+880,400,190+880,400);
    arc(215+880,400,0,180,25);
    line(240+880,400,280+880,400);
    line(20+880,360,20+880,400);
    line(20+880,360,60+880,360);
    line(60+880,360,100+880,300);
    line(100+880,300,200+880,300);
    line(200+880,300,240+880,360);
    line(240+880,360,280+880,360);
    line(280+880,360,280+880,400);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(150+880,350,WHITE);
    circle(85+880,400,20);
    circle(215+880,400,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(100+880,410,WHITE);
    floodfill(220+880,410,WHITE);
    rectangle(100+880,340,130+880,360);
    rectangle(170+880,340,200+880,360);
    setfillstyle(SOLID_FILL,RED);
    floodfill(120+880,350,WHITE);
    floodfill(180+880,350,WHITE);
    }

    else
    {
    setcolor(WHITE);
    line(20+i,400,60+i,400);
    arc(85+i,400,0,180,25);
    line(110+i,400,190+i,400);
    arc(215+i,400,0,180,25);
    line(240+i,400,280+i,400);
    line(20+i,360,20+i,400);
    line(20+i,360,60+i,360);
    line(60+i,360,100+i,300);
    line(100+i,300,200+i,300);
    line(200+i,300,240+i,360);
    line(240+i,360,280+i,360);
    line(280+i,360,280+i,400);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(150+i,350,WHITE);
    circle(85+i,400,20);
    circle(215+i,400,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(100+i,410,WHITE);
    floodfill(220+i,410,WHITE);
    rectangle(100+i,340,130+i,360);
    rectangle(170+i,340,200+i,360);
    setfillstyle(SOLID_FILL,RED);
    floodfill(120+i,350,WHITE);
    floodfill(180+i,350,WHITE);

    }

    //boundary
    setcolor(DARKGRAY);
    line(2,420,maxX-2,420);
    line(2,580,maxX-2,580);
    line(2,420,2,580);
    line(maxX-2,420,maxX-2,580);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(10,430,DARKGRAY);


    //sun
    setcolor(YELLOW);
    circle(100+i,100,50);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(102+i,102,YELLOW);

    //end point
    setcolor(GREEN);
    rectangle(1180,300,1200,420);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(1190,360,GREEN);
    setcolor(BLUE);
    rectangle(1140,260,1240,300);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(1190,280,BLUE);
    setcolor(WHITE);
    outtextxy(1190-textwidth("END")/2,280-textheight("END")/2,"END");

    //air plane
    setcolor(WHITE);
    line(940-i,80,950-i,70);
    line(940-i,80,950-i,90);
    line(950-i,70,990-i,70);
    line(950-i,90,990-i,90);
    line(990-i,70,1020-i,30);
    line(990-i,90,1020-i,130);
    line(1020-i,130,1020-i,90);
    line(1020-i,30,1020-i,70);
    line(1020-i,70,1070-i,70);
    line(1020-i,90,1070-i,90);
    line(1070-i,70,1085-i,50);
    line(1070-i,90,1085-i,110);
    line(1085-i,50,1085-i,110);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(945-i,80,WHITE);


    //BUILDING
    setcolor(RED);
    rectangle(750,200,840,420);
    setfillstyle(SOLID_FILL,RED);
    floodfill(775,360,RED);
    setcolor(WHITE);
    rectangle(770,220,820,240);
    rectangle(770,260,820,280);
    rectangle(770,300,820,320);
    rectangle(770,340,820,360);
    rectangle(770,380,820,400);
    delay(10);

    cleardevice();
    }


    //digital clock
    while(1)
    {

    time_t rawtime;
    struct tm *currenttime;
    rawtime=time(NULL);
    currenttime=localtime(&rawtime);
    char a[100];
    strftime(a,100,"%I:%M:%S",currenttime);
    setcolor(RED);
    outtextxy(maxX-100,10,a);

    strftime(a,100,"%a %d %b,%y",currenttime);
    setcolor(YELLOW);
    outtextxy(maxX-120,30,a);
    delay(1000);
    }





    getch();
    closegraph();
}
