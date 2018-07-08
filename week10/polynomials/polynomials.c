#include<stdio.h>
#define N 1000

int mult(int cal[N],int na,int p[N],int nb,int res[N]){
    int m,n;
    for(m=0;m<=na+nb;m++)res[m]=0;
    for(m=0;m<=nb;m++){
        for(n=0;n<=na;n++){
            res[m+n]+=p[m]*cal[n];
        }
    }
    return na+nb;
}
main(){
    //freopen("AR02.in","r",stdin);
    //freopen("666.txt","w",stdout);
    int ncase,d,na,nb,nc,n;
    int i,j;
    scanf("%d",&ncase);
    while(ncase--){
        int cal[N],p[N],res[N];
        scanf("%d %d %d %d",&p[2],&p[1],&p[0],&d);
        for(i=0;i<3;i++)cal[i]=p[i];
        na=nb=nc=2;
        for(i=1;i<d;i++){
            nc=mult(cal,nc,p,nb,res);
            for(j=0;j<=nc;j++){
                cal[j]=res[j];
            }
        }
        for(i=nc;i>0;i--)printf("%d ",cal[i]);
        printf("%d",cal[0]);
        if(ncase>0)printf("\n");
    }
    return 0;
}
