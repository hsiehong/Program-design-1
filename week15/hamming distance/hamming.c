#include<stdio.h>
#define N 1000

int ham(int a,int b){
    int t=0,n;
    n=a^b;
    //每次比n的第一位，1是我們要的，計算1出現的次數
    while(n){
        if(n&1)t++;
        n>>=1;
    }
    return t;
}
main(){
    int ncase,num,data[N],i,j,mymax,fqc;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&num);
        mymax=0;
        for(i=0;i<num;i++)scanf("%d",&data[i]);
        for(i=0;i<num;i++){
            for(j=i+1;j<num;j++){
                fqc=ham(data[i],data[j]);
                mymax=(mymax>fqc)?mymax:fqc;
            }
        }
        printf("%d\n",mymax);
    }
    return 0;
}
