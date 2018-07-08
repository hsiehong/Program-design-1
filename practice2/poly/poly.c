#include<stdio.h>
#include<math.h>
#define N 100

main(){
    //freopen("AR02.in","r",stdin);
    //freopen("yy.txt","w",stdout);
    int ncase,d,a,b,na,nb,nc;
    scanf("%d",&ncase);
    while(ncase--){
        int aa[N],bb[3],cc[N];//a是被乘，b是乘數，c是結果
        scanf("%d %d %d %d",&bb[2],&bb[1],&bb[0],&d);//高次存到低次
        for(a=2;a>=0;a--)aa[a]=bb[a];
        na=nb=nc=2;
        for(a=1;a<d;a++){
            nc=mult(aa,nc,bb,2,cc);
            for(b=0;b<=nc;b++){
                aa[b]=cc[b];
            }
        }
        for(a=nc;a>0;a--)printf("%d ",aa[a]);
        printf("%d",aa[0]);
        if(ncase>0)printf("\n");
    }
    return 0;
}
int mult(int aa[],int na,int bb[],int nb,int cc[]){
    int m,n;
    for(m=0;m<=na+nb;m++)cc[m]=0;//先清空計算結果的陣列
    for(m=0;m<=nb;m++){
        for(n=0;n<=na;n++){
            cc[m+n]+=bb[m]*aa[n];
        }
    }
    return na+nb;
}
