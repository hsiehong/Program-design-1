//讀取一整數N，並由N以反向順序列印直到1


#include<stdio.h>

main(){
    int n,a;
    scanf("%d",&n);
    for(a=n;a>1;a--){
        printf("%d\n",a);
    }
    printf("1");
    return 0;
}
