#include<stdio.h>

main(){
    printf("輸入:(a,b,c,d)\n");
    int a,b,c,d;
    int w,h;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    w=c-a;
    h=d-b;
    if(c>a&&d>b){
        printf("輸出:\n");
        printf("面積:");
        printf("%d \n",w*h);
        printf("周長:");
        printf("%d \n",(w+h)*2);
    }
    else{
        printf("輸出:\n");
        printf("c必續大於a且d必須大於b");
    }
    system("PAUSE");
    return 0;
}
