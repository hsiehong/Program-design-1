#include<stdio.h>

//讀入三個正整數a,b,c。計算並印出其中的最小值


main(){
    printf("輸入:\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf("輸出:\n");

    if((b>c&&c>a)||(c>b&&b>a)||(b==c&&b>a)||(c>b&&b==a)||(b>c&&c==a)){
        printf("%d",a);
    }
    else if((a>c&&c>b)||(c>a&&a>b)||(c==a&&a>b)||(a>c&&c==b)||(c>a&&a==b)){
        printf("%d",b);
    }
    else if(a==b&&b==c){
        printf("%d",c);
    }
    else{
        printf("%d",c);
    }
    return 0;

}
