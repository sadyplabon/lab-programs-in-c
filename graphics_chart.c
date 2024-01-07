#include <graphics.h>

int main() {
int gd=DETECT,gm;
initgraph(&gd,&gm,"");


outtextxy(10, 10 + 10, "Program to draw a bar chart using graphics");


line(100,420,100,60);
line(100,420,500,420);

//bars with filling style
setfillstyle(LINE_FILL,RED);
bar3d(150,200,200,419,10,1);

setfillstyle(LINE_FILL,GREEN);
bar(225,90,275,419);

setfillstyle(LINE_FILL,BLUE);
bar(300,120,350,419);

setfillstyle(LINE_FILL,YELLOW);
bar(375,180,425,419);

getch();
}

Pi Chart
=======
#include<graphics.h>
#include<conio.h>

int main() {
   int gd = DETECT, gm, x, y;
   initgraph(&gd, &gm, "");

   settextstyle(BOLD_FONT,HORIZ_DIR,2);
   outtextxy(220,10,"PIE CHART");

   x = getmaxx()/2;
   y = getmaxy()/2;

   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
   setfillstyle(SOLID_FILL, RED);
   pieslice(x, y, 0, 60, 120);
   outtextxy(x + 140, y - 70, "FOOD");

   setfillstyle(SOLID_FILL, YELLOW);
   pieslice(x, y, 60, 160, 120);
   outtextxy(x - 30, y - 170, "STUDY");

   setfillstyle(SOLID_FILL, GREEN);
   pieslice(x, y, 160, 220, 120);
   outtextxy(x - 250, y, "SLEEP");

   setfillstyle(SOLID_FILL, BROWN);
   pieslice(x, y, 220, 360, 120);
   outtextxy(x, y + 150, "WORK");

   getch();
   closegraph();
   return 0;
}
