//讀入三正整數a,b,c,由此三數構成三邊的三角形不存在輸出"0"，存在則輸出"1"
#include<stdio.h>

main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int i,j,k;

    if((a+b<=c)||(b+c<=a)||(a+c<=b)){
        printf("0");
    }
    else{
        printf("1");
    }
}
