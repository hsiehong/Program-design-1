#include<stdio.h>

main(){
    printf("��J:(a,b,c,d)\n");
    int a,b,c,d;
    int w,h;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    w=c-a;
    h=d-b;
    if(c>a&&d>b){
        printf("��X:\n");
        printf("���n:");
        printf("%d \n",w*h);
        printf("�P��:");
        printf("%d \n",(w+h)*2);
    }
    else{
        printf("��X:\n");
        printf("c����j��a�Bd�����j��b");
    }
    system("PAUSE");
    return 0;
}
