#include<stdio.h>

//Ū�J�T�ӥ����a,b,c�C�p��æL�X�䤤���̤p��


main(){
    printf("��J:\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf("��X:\n");

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
