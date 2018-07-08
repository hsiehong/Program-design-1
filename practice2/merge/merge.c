#include<stdio.h>
#define N 1000

main(){
    //freopen("merge.in","r",stdin);
    //freopen("ppp.txt","w",stdout);
    int ncase,na,nb,ia,ib,ic;
    int a[N],b[N],c[N];
    int i;
    scanf("%d",&ncase);
    while(ncase--){

        for(i=0;i<N;i++)a[i]=b[i]=0;
        scanf("%d %d",&na,&nb);
        for(i=0;i<na;i++)scanf("%d",&a[i]);
        for(i=0;i<nb;i++)scanf("%d",&b[i]);
        ia=ib=ic=0;
        int com=0;
        while(ia!=na&&ib!=nb){
            if(a[ia]<=b[ib]){
                c[ic++]=a[ia++];
                com++;
            }
            else {
                c[ic++]=b[ib++];
                com++;
            }
        }
        //a陣列用完
        if(ia==na){
            for(i=ib;i<nb;i++)c[ic++]=b[i];
        }
        //b陣列用完
        else{
            for(i=ia;i<na;i++)c[ic++]=a[i];
        }
        printf("%d\n",com);
        if(na+nb<=6){
            for(i=0;i<na+nb;i++){
                printf("%d",c[i]);
                if(i<na+nb-1)printf(" ");
            }
        }
        else printf("%d %d %d %d %d %d",c[0],c[1],c[2],c[na+nb-3],c[na+nb-2],c[na+nb-1]);
        if(ncase>0)printf("\n");
    }
    return 0;
}
