#include<stdio.h>
#define N 1000

main(){
    //freopen("in.txt","r",stdin);
    //freopen("DDD.txt","w",stdout);
    int ncase,num;
    int a,oon=0,een=0,mino,maxe;
    scanf("%d",&ncase);
    while(ncase--){
        oon=een=0;
        int oddar[N],evenar[N];
        scanf("%d",&num);
        while(num--){
            scanf("%d",&a);
            if(a%2!=0)oddar[oon++]=a;
            else evenar[een++]=a;
        }
        //т程计
        mino=100000001;
        for(a=0;a<oon;a++){
           if(oddar[a]<mino)mino=oddar[a];
        }
        //т程案计
        maxe=1;
        for(a=0;a<een;a++){
            if(evenar[a]>maxe)maxe=evenar[a];
        }
        if(mino==100000001)printf("No\n");
        else printf("%d\n",mino);
        if(maxe==1)printf("No");
        else printf("%d",maxe);

        if(ncase>0)printf("\n\n");
    }
    return 0;
}
