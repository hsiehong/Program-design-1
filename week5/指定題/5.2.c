/*寫一個程式讀入一正整數n。首先印出1到n，再印出n-1到1。
Input format:
第一行為測資筆數T。接下來的T行，每行唯一正整數n。
Output format:
對每個輸入的n，先印出1到n再印出n-1到1，每個數字一行。
每兩組輸出之間須以一空行隔開。*/

#include<stdio.h>
main(){
    int times;
    scanf("%d",&times);
    int a,b,t;
    for(a=1;a<times;a++){
        scanf("%d",&b);
        for(t=1;t<=b;t++){
            printf("%d\n",t);
        }
        for(t=b-1;t>0;t--){
            printf("%d\n",t);
        }
        printf("\n");
    }
    scanf("%d",&b);
    for(t=1;t<=b;t++){
        printf("%d\n",t);
    }
    for(t=b-1;t>1;t--){
        printf("%d\n",t);
    }
    printf("1");

    return 0;
}
