#include<iostream>
#include<windows.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<stdio.h>
#include<windowsx.h>

void mainmenu();
void loading();
void Gameover(int *z);
void mobil(float xp,float yp,float sc)
{
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4;
//Body
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    x0=0.5419975077249;y0=3.1712586165533;
    x1=7.6712420318255;y1=5.5010770884816;
    x2=17.4098832444857;y2=4.1031860053246;
    x3=17.2001995820122;y3=1.6801747945192;
    x4=0.7516811701985;y4=1.5170875014842;
    line(x0*sc+xp,-y0*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x1*sc+xp,-y1*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x3*sc+xp,-y3*sc+yp);
    line(x4*sc+xp,-y4*sc+yp,x0*sc+xp,-y0*sc+yp);
    line(x3*sc+xp,-y3*sc+yp,x4*sc+xp,-y4*sc+yp);
    floodfill(2*sc+xp,-2*sc+yp,DARKGRAY);
//roda
   setcolor(WHITE);
    x0=2.8485177949339;y0=1.2375092848528;
    x1=14.1947337532247;y1=1.33070202373;
    for(int i=0;i<25;i++)
    circle(x0*sc+xp,-y0*sc+yp,i);
    for(int i=0;i<25;i++)
    circle(x1*sc+xp,-y1*sc+yp,i);
//kaca mobil
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    x0=2.6578191504903;y0=3.6437347970003;
    x1=7.613258272745;y1=5.2812773147216;
    x2=11.2522416454591;y2=4.8531616238141;
    x3=11.3485676759133;y3=4.2752054410889;
    x4=6.8;y4=4.4;
    line(x0*sc+xp,-y0*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x1*sc+xp,-y1*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x3*sc+xp,-y3*sc+yp);
    line(x3*sc+xp,-y3*sc+yp,x0*sc+xp,-y0*sc+yp);
    floodfill(x4*sc+xp,-y4*sc+yp,YELLOW);
}
void matahari(float xp2,float yp2,float sc2)
{
    float x0,y0,x1,y1;
    setcolor(YELLOW);
    x0=2;y0=1;
    for(int i=0;i<40;i++)
    circle(x0*sc2+xp2,-y0*sc2+yp2,i);
}
void jalanan(float xp3,float yp3,float sc3)
{
    float x0,y0,x1,y1;
    setcolor(WHITE);
    x0=0;y0=980;
    x1=1915;y1=1080;
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    rectangle(x0,y0,x1,y1);
    floodfill(1000,1000,BROWN);
}
void lampu (float xp5,float yp5,float sc5)
{
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8;
//tiang
    setcolor(WHITE);
    x0=4.8200583541794;y0=1.1877856444424;
    x1=4.829448343511;y1=6.849949211429;
    x2=6.181606807269;y2=7.6480983046194;
    x3=7.2990155377357;y3=7.6199283366245;
    x4=7.3084055270673;y4=7.4790784966497;
    x5=6.5853763485301;y5=7.4884684859814;
    x6=6.181606807269;y6=7.4790784966497;
    x7=5.0172481301441;y7=6.7654393074441;
    x8=5.0550294390734;y8=1.1827277483662;
    line(x0*sc5+xp5,-y0*sc5+yp5,x1*sc5+xp5,-y1*sc5+yp5);
    line(x1*sc5+xp5,-y1*sc5+yp5,x2*sc5+xp5,-y2*sc5+yp5);
    line(x2*sc5+xp5,-y2*sc5+yp5,x3*sc5+xp5,-y3*sc5+yp5);
    line(x3*sc5+xp5,-y3*sc5+yp5,x4*sc5+xp5,-y4*sc5+yp5);
    line(x4*sc5+xp5,-y4*sc5+yp5,x5*sc5+xp5,-y5*sc5+yp5);
    line(x5*sc5+xp5,-y5*sc5+yp5,x6*sc5+xp5,-y6*sc5+yp5);
    line(x6*sc5+xp5,-y6*sc5+yp5,x7*sc5+xp5,-y7*sc5+yp5);
    line(x7*sc5+xp5,-y7*sc5+yp5,x8*sc5+xp5,-y8*sc5+yp5);
    line(x8*sc5+xp5,-y8*sc5+yp5,x0*sc5+xp5,-y0*sc5+yp5);
//lampunya
    setcolor(YELLOW);
    x0=7.1375433096765;y0=7.4612970968756;
    x1=7.1377186903479;y1=7.3409608998142;
    x2=6.6241986328871;y2=7.3451700806131;
    x3=6.5853763485301;y3=7.4884684859814;
    line(x0*sc5+xp5,-y0*sc5+yp5,x1*sc5+xp5,-y1*sc5+yp5);
    line(x1*sc5+xp5,-y1*sc5+yp5,x2*sc5+xp5,-y2*sc5+yp5);
    line(x2*sc5+xp5,-y2*sc5+yp5,x3*sc5+xp5,-y3*sc5+yp5);
}
void Meteor (float xp6,float yp6,float sc6)
{
    float x0,y0,x1,y1;
    setcolor(RED);
    x0=1;y0=1;
    for(int i=0;i<30;i++)
    circle(x0*sc6+xp6,-y0*sc6+yp6,i);
}
void game()
{
    int page = 0;
    float sc,xp1,yp1,xp2,yp2,xp3,yp3,xp4,yp4,xp5,yp5,xp6,yp6,xh,yh,r,ra;
    char score [9999];
    xp1 = 1920 ;yp1=980; //tempat mobil
    xp2 = 70 ;yp2=90;   //tempat matahari
    xp3 = 100 ;yp3=940; //tempat jalan
    xp4= 0 ;yp4=1040; // lampu jalan 1
    xp5= 1200 ;yp5=1040; // lampu jalan 2
    xp6= 50  ;yp6=0; //meteor
    r=1; //basic speed mobil
    int flag = 0; //integer untuk keybind
    int z = 0; //integer untuk game over
    ra = 10; //speed basic other object
    srand(time(0));
    sndPlaySound("AAA.wav",SND_ASYNC);
    while((1))
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        mobil(xp1,yp1,20);
        xp1 = xp1-r    ;
        if  (xp1<0)
        {
            xp1=1920;
        }
        if( GetAsyncKeyState( 87 ) < 0 ){
            flag=1;
            ra=15;
        }
        if (flag==1){
            r = 5;
            if (r==5){
                flag=0;
            }
        }
        if( GetAsyncKeyState( 32 ) < 0 ){
                r=0;
                ra=5;
        }
        matahari(xp2,yp2,40);
        xp2 = xp2-2;
        if  (xp2<0)
        {
            xp2=1920;
        }
        jalanan(xp3,yp3,20);
        lampu(xp4,yp4,50);
        xp4 = xp4+ra    ;lampu(xp4,yp4,50);
        xp4 = xp4+ra    ;
        if  (xp4>1920)
        {
            xp4=-600;
        }
        lampu(xp5,yp5,50);
        xp5 = xp5+ra    ;
        if  (xp5>1920)
        {
            xp5=-600;
        }
        if  (xp4>1920)
        {
            xp4=-600;
        }
        lampu(xp5,yp5,50);
        xp5 = xp5+ra    ;
        if  (xp5>1920)
        {
            xp5=-600;
        }
        if (xp1<1800)
        {
        Meteor(xp6,yp6,10);
        xp6 = xp6+5;
        yp6 = yp6+5;
        if (yp6>=930)
        {
            xp6 = rand()%800;
            yp6 = 60;
        }
        }
        if ((xp6>0.5419975077249*20+xp1)&&(xp6<17.4098832444857*20+xp1)&&(yp6<5.5010770884816*20+yp1))
        {
            cleardevice();
            Gameover(&z);
        }
        z=z+1;
        sprintf(score,"%d",z);
        settextstyle(8,0,1);
        outtextxy(20,440,score);
        page = 1-page;
        delay(1);
        }
    }
void Credits()
{
        cleardevice();
        while(1)
        {
        setcolor(YELLOW);
        settextstyle(8,0,1);
        outtextxy(100,200,"CIBERTRUK");
        outtextxy(100,250,"Komang Alit Narayana / 5024201066");
        outtextxy(100,275,"Press Escape to return");
        if(GetAsyncKeyState(27)<0){
            cleardevice();
            clearmouseclick(WM_LBUTTONDOWN);
            return mainmenu();
        }
        delay(100);
        cleardevice();
        }
}
void mainmenu ()
{
    int xm,ym,page=0;
    sndPlaySound("cyberpunk.wav",SND_ASYNC|SND_LOOP);
    setactivepage(page);
    setvisualpage(page);
    while (1)
    {
        xm=mousex();
        ym=mousey();
      setcolor(YELLOW);
      rectangle(750,200,1200,400);
      rectangle(750,450,1200,650);
      rectangle(750,700,1200,900);
    if((ym>200)&&(ym<400)&&(xm>750)&&(xm<1200))
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            cleardevice();
            loading();
            clearmouseclick((WM_LBUTTONDOWN));
            break;
        }
    }
    if((ym>450)&&(ym<650)&&(xm>750)&&(xm<1200))
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            cleardevice();
            Credits();
            clearmouseclick((WM_LBUTTONDOWN));
            break;
        }
    }
    if((ym>700)&&(ym<900)&&(xm>750)&&(xm<1200))
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            closegraph();
            exit(0);
            clearmouseclick((WM_LBUTTONDOWN));
            break;
        }
    }
    setcolor(YELLOW);
    settextstyle(8,0,6);
    outtextxy(915,280,"PLAY");
    outtextxy(875,520,"CREDITS");
    outtextxy(915,765,"EXIT");
    page=1-page;
    delay(20);
    cleardevice();

    }
}
void loading()
{
    sndPlaySound("lmaoding.wav",SND_ASYNC);
    settextstyle(0, HORIZ_DIR, 10);
    outtextxy(590,440, "Loading...");
    settextstyle(8,0,5);
    outtextxy(550,600,"W = Increase Speed");
    outtextxy(550,640,"Space = Decrease Speed");
    rectangle(1400,600, 550, 541);
    for(int i = 0; i<852;i=i+3)
    {
        setcolor(RED);
        rectangle(1401,601,550+i,540);
        delay(50);
    }
    cleardevice();
    return game();
}
void Gameover(int *z)
{
    int page = 0;
    setactivepage(page);
    setvisualpage(page);
    cleardevice();
    char HIGHSCORE [9999];
    while(1)
    {
        setcolor(YELLOW);
        settextstyle(8,0,4);
        outtextxy(915,200,"GAME OVER");
        outtextxy(875,400,"ENTER = MAIN MENU");
        outtextxy(915,600,"ESC = EXIT");
        sprintf(HIGHSCORE,"SCORE : %d",*z);
        outtextxy(915,800,HIGHSCORE);
        if (GetAsyncKeyState(27)<0)
        {
            closegraph();
            exit(0);
        }
         if (GetAsyncKeyState(13)<0)
        {
            cleardevice();
            clearmouseclick(WM_LBUTTONDOWN);
            return mainmenu();
        }
        page = 1-page;
        delay(10);

    }

}
int main()
{
    initwindow(1920,1080);
    mainmenu();
    return 0;
}
