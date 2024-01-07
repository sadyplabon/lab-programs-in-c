#include<graphics.h>

int main()
{
int gm=DETECT,gd,i;
initgraph(&gm,&gd,"");

for (i=0;1<500;i++){

        //Clouds
        setcolor(8);
ellipse(200,30,60,240,10,15);
ellipse(225,20,345,165,20,15);
ellipse(262,27,340,160,20,15);
ellipse(268,42,230,50,20,10);
ellipse(226,46,163,340,31,15);
ellipse(300,21,20,182,21,19);
ellipse(325,31,290,100,21,15);
ellipse(299,45,228,20,33,11);

ellipse(40,30,60,240,10,15);
ellipse(65,20,345,165,20,15);
ellipse(105,27,340,160,20,15);
ellipse(109,42,230,50,20,10);
ellipse(66,46,163,340,31,17);

ellipse(450,30,60,240,10,15);
ellipse(475,20,345,165,20,15);
ellipse(512,27,340,160,20,15);
ellipse(518,42,230,50,20,10);
ellipse(476,46,163,340,31,15);

//House
setcolor(WHITE);
        rectangle(50,210,320,300);
        rectangle(150,210,320,300);
        rectangle(80,250,120,300);
        rectangle(180,240,220,270);
        rectangle(250,240,290,270);

        line(100,180,50,210);
        line(100,180,150,210);
        line(100,180,270,180);
        line(270,180,320,210);

        //Fill colors
        setfillstyle(SOLID_FILL, BROWN);
        floodfill(101,182,WHITE);
        floodfill(151,182,WHITE);
        setfillstyle(HATCH_FILL, BLUE);
        floodfill(151, 211, WHITE);
        floodfill(149, 211, WHITE);



//Mountains
setfillstyle(XHATCH_FILL, GREEN);
line(0,150,100,75);
line(100,75,200,150);
line(0,150,200,150);
floodfill(99,149, WHITE);

line(200,150,275,75);
line(275,75,375,150);
line(200,150,375,150);
floodfill(274,149, WHITE);

line(375,150,450,75);
line(450,75,550,150);
line(375,150,550,150);
floodfill(449,149, WHITE);

line(550,150,600,75);
line(600,75,750,180);
line(550,150,750,150);
floodfill(599,149, WHITE);

setfillstyle(SOLID_FILL,RED);
circle(200,90-i,20);
floodfill(200,90-i,15);

//Bike
setfillstyle(INTERLEAVE_FILL,RED);
circle(200 + i,420,30);
floodfill(200+i,420,15);
        circle(350 + i,420,30);
        floodfill(350+i,420,15);
        arc(200 + i, 420, 0, 180, 34);
        arc(350 + i, 420, 30, 195, 34);
        line(200 + i,420,270 + i,420);
        line(270 + i,360,270 + i,420);
        line(270 + i,370,200 + i,420);
        line(270 + i,420,350 + i,370);
        line(270 + i,370,350 + i,370);
        line(350 + i,420,350 + i,340);
        line(340 + i,330,360 + i,350);
        line(265 + i,400,275 + i,440);
        line(260 + i,360,280 + i,360);
        outtextxy(100+i,340+10,"MY ID : 181030101030");

        line(0,450,650,450);

        delay(30);
        cleardevice();
}


    getch();
    closegraph();
    return 0;

}
