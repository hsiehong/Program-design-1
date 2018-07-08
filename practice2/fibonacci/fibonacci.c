#include<stdio.h>
#define N 10000
//超過47位會產生溢位

//費式數列求餘數
main(){
    int f[N],a,i,p;
    scanf("%d %d",&a,&p);
    f[0]=0;f[1]=1;

    for(i=2;i<=a;i++){
        f[i-2]%=p;f[i-1]%=p;
        f[i]=f[i-1]+f[i-2];
        f[i]%=p;
    }
    printf("%d ",f[a]);
    return 0;
}
