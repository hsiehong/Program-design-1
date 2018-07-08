#include<stdio.h>
#define N 1000
main(){
    int ncase,n,a,b,x,y,mymin,total,dx,dy,temp;
    int xar[N],yar[N],flag[N];
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&n);//座標數
        for(a=0;a<n;a++)scanf("%d %d",&xar[a],&yar[a]);
        x=y=total=0;
        for(a=0;a<n;a++)flag[a]=0;//flag清空
        for(b=0;b<n;b++){
            //找距離最近的點，共n個點，所以跑n次
            mymin=9999999;
            for(a=0;a<n;a++){
                if(flag[a])continue;
                dx=xar[a]-x;if(dx<0)dx=-dx;
                dy=yar[a]-y;if(dy<0)dy=-dy;
                if(dx+dy<mymin){
                    mymin=dx+dy;
                    temp=a;
                }
            }
            total+=mymin;
            flag[temp]=1;
            x=xar[temp];y=yar[temp];
        }
        printf("%d",total);
        if(ncase>0)printf("\n");
    }
    return 0;
}
