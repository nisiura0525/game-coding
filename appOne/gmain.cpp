#include"libOne.h"
void gmain(){
    window(800, 800);

    textSize(60);
    text(height, 0, 60);
    int no = loadImage("assets/gorilla.png");
    int no1 = loadImage("assets/banana.jpg");
    rectMode(CENTER);
    angleMode(DEGREES);
    int v = 400;
    int o = 780;
    while (notQuit) {

        v += 5;
        o += 2;
        clear(58, 186, 160);
        image(no,v,400);
        image(no1,o, 400);

    }
}
