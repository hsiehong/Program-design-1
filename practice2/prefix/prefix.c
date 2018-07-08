#include<stdio.h>
#define N 1000001
main(){
    //freopen("prefix.in","r",stdin);
    //freopen("FF.txt","w",stdout);
    int n,k,temp;
    int a,i,j;
    scanf("%d %d",&n,&k);
    int sum[n];
    sum[0]=0;
    for(a=0;a<n;a++){
        scanf("%d",&temp);
        sum[a+1]=sum[a]+temp;
    }
    //for(a=0;a<=n;a++)printf("%d ",sum[a]);
    while(k--){
        scanf("%d %d",&i,&j);
        if(j>i)printf("%d",sum[j]-sum[i-1]);
        else printf("%d",sum[i]-sum[j-1]);
        if(k>0)printf("\n");
    }
    return 0;
}
