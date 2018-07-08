#include<stdio.h>
#include<string.h>
char rev(char t[50],int l){
    int i;
    char temp;
    for(i=0;i<l/2;i++){
        temp=t[i];
        t[i]=t[l-i-1];
        t[l-i-1]=temp;
    }

    for(i=l;i<49;i++)t[i]='0';
}
main(){
    int ncase,i,la,lb;
    char tmp;
    scanf("%d",&ncase);
    while(ncase--){
        char a[50],b[50],c[50];
        scanf("%s%s",a,b);
        //高位存到低位;
        la=strlen(a);
        lb=strlen(b);
        //reverse
        rev(a,la);
        rev(b,lb);
        //c存純數字
        for(i=0;i<49;i++)c[i]=0;
        for(i=0;i<49;i++){
            c[i]+=(a[i]-'0')+(b[i]);
            if(c[i]>'9'){
                c[i]-=10;
                c[i+1]++;
            }
        }
        for(i=48;i>=0;i--){
            if(c[i]!='0')break;
        }
        for(;i>=0;i--)printf("%c",c[i]);
        if(ncase>0)printf("\n");
    }
    return 0;
}
