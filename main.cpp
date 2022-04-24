#include <iostream>
#include<windows.h>
#include<graphics.h>


void mobil(float xp,float yp,float sc)
{
    float x0,y0,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8;
//brum brum
    x0=0.5419975077249;y0=3.1712586165533;
    x1=7.6712420318255;y1=5.5010770884816;
    x2=17.4098832444857;y2=4.1031860053246;
    x3=17.2001995820122;y3=1.6801747945192;
    x4=15.5244826253206;y4=1.2142111001335;
    x5=12.6990244515465;y5=0.9812292529407;
    x6=4.2035589966177;y6=0.9812292529407;
    x7=1.3574339728998;y7=1.3074038390107;
    x8=0.7516811701985;y8=1.5170875014842;
    line(x0*sc+xp,-y0*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x1*sc+xp,-y1*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x3*sc+xp,-y3*sc+yp);
    line(x3*sc+xp,-y3*sc+yp,x4*sc+xp,-y4*sc+yp);
    line(x5*sc+xp,-y5*sc+yp,x6*sc+xp,-y6*sc+yp);
    line(x7*sc+xp,-y7*sc+yp,x8*sc+xp,-y8*sc+yp);
    line(x8*sc+xp,-y8*sc+yp,x0*sc+xp,-y0*sc+yp);
//roda
    x0=2.8485177949339;y0=1.2375092848528;
    x1=14.1947337532247;y1=1.33070202373;
    circle(x0*sc+xp,-y0*sc+yp,29);
    circle(x1*sc+xp,-y1*sc+yp,29);
//kaca mobil
    x0=2.6578191504903;y0=3.6437347970003;
    x1=7.613258272745;y1=5.2812773147216;
    x2=11.2522416454591;y2=4.8531616238141;
    x3=11.3485676759133;y3=4.2752054410889;
    line(x0*sc+xp,-y0*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x1*sc+xp,-y1*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x3*sc+xp,-y3*sc+yp);
    line(x3*sc+xp,-y3*sc+yp,x0*sc+xp,-y0*sc+yp);
}

int main()
{

    float sc,xp1,yp1,xp2,yp2,xh,yh;
    xp1 = 1920; yp1=1000;
    initwindow(1920,1080);
    while(!kbhit())
    {
        xp1 = xp1-30    ;
        if  (xp1<0)
        {
            xp1=1920;
        }
        mobil(xp1,yp1,20);
        delay(10);
        cleardevice();
    }

    return 0;
}



