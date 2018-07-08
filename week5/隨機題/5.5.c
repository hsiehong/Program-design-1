//跑跑命令卡丁車
#include<stdio.h>
main(){
    int time;
    int c;//comment
    int x=0,y=0;//座標
    int ttemp=0;//temp時間
    int xtemp=0;//temp X座標
    int ytemp=0;//temp Y座標
    int dt;//時間變化
    int dir=1;//方向//北東南西//1234

    while(1){
        scanf("%d",&time);
        scanf("%d",&c);
        dt=time-ttemp;

        if(c==1){
            if(dir==1){
                x=xtemp+(-10)*dt;
                dir=4;
            }
            else if(dir==2){
                y=ytemp+10*dt;
                dir=1;
            }
            else if(dir==3){
                x=xtemp+10*dt;
                dir=2;
            }
            else if(dir==4){
                y=ytemp+(-10)*dt;
                dir=3;
            }
        }

        if(c==2){
            if(dir==1){
                x=xtemp+10*dt;
                dir=2;
            }
            else if(dir==2){
                y=ytemp+(-10)*dt;
                dir=3;
            }
            else if(dir==3){
                x=xtemp+(-10)*dt;
                dir=4;
            }
            else if(dir==4){
                y=ytemp+10*dt;
                dir=1;
            }
        }

        if(c==3){
            if(dir==1){
                y=ytemp+10*dt;
            }
            else if(dir==2){
                x=xtemp+10*dt;
            }
            else if(dir==3){
                y=ytemp+(-10)*dt;
            }
            else if(dir==4){
                x=xtemp+(-10)*dt;
            }
            break;
        }

        xtemp=x;
        ytemp=y;
        ttemp=time;

    }
    printf("%d\n%d\n",x,y);
    return 0;
}
