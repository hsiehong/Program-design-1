//Ū�J�T�����a,b,c,�Ѧ��T�ƺc���T�䪺�T���Τ��s�b��X"0"�A�s�b�h��X"1"
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
