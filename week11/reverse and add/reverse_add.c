#include<stdio.h>

main(){
    int ncase,num,times;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&num);
        times=0;
        while(1){
            if(num==Rev(num)){
                printf("%d %d",times,num);
                break;
            }
            else{
                num+=Rev(num);
                times++;
            }
        }
        if(ncase>0)printf("\n");
    }
    return 0;
}

int Rev(int a){
    int n=0;
    while(a){
        n=n*10+a%10;
        a/=10;
    }
    return n;
}
