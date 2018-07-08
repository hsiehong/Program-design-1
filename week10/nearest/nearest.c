#include<stdio.h>
#define N 1000

main(){
    //freopen("nearest.in","r",stdin);
    //freopen("1124.txt","w",stdout);
    int ncase,num,xx,yy,mymin,total,dx,dy=0;
    int xar[N],yar[N],flag[N];
    int a,b,temp;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&num);
        for(a=0;a<num;a++)scanf("%d %d",&xar[a],&yar[a]);
        xx=yy=total=0;
        for(a=0;a<num;a++)flag[a]=0;
        for(a=0;a<num;a++)
            {
                mymin=1000000;
                for(b=0;b<num;b++){
                    if(flag[b])continue;
                    dx=xar[b]-xx;if(dx<0)dx=-dx;
                    dy=yar[b]-yy;if(dy<0)dy=-dy;
                    if(dx+dy<mymin){
                        mymin=dx+dy;
                        temp=b;
                    }
                }
                xx=xar[temp];yy=yar[temp];
                flag[temp]=1;
                total+=mymin;
            }
            printf("%d",total);
            if(ncase>0)printf("\n");
    }
    return 0;
}
