#include<stdio.h>
main(){
    printf("��J:(a,b,c,d)\n");
    double a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    printf("��X:\n");
    if((b/a)==(d-b)/(c-a))
        {
            printf("1\n");
        }
    else{
            printf("0\n");
        }
    return 0;
}
