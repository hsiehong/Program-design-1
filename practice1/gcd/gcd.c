//GCD

#include<stdio.h>

main(){
    int ncase;
    int times=0;
    int temp;
    scanf("%d",&ncase);
    while(ncase--){
        int a,b;
        while(a!=1&&b!=1){
            a%=b;
            if(a<b){
                temp=a;
                a=b;
                b=temp;
            }
            times++;
        }
        printf("%d",times);
    }
}
