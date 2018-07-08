//讀入4整數a,b,c,d並計算以(a,b),(c,d)為頂點的長方形所形成的周長
#include<stdio.h>
#include<stdlib.h>
main(){
    int a,b,c,d;
    int width,height;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    width=abs(a-c);
    height=abs(b-d);

    printf("%d",height*2+width*2);
    return 0;
}
