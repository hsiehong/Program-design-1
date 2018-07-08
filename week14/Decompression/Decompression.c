#include<stdio.h>
#include<string.h>
#define LEN 3000

main(){
    char str[LEN],word[100],num[100];
    int i,l,m,n,k;
    while(gets(str)!=NULL){
       l=strlen(str);
       m=n=0;
       for(i=0;i<l;i++){
        if(str[i]>='0'&&str[i]<='9'){
            num[m++]=str[i];
            num[m]='\0';
        }
        else{
            word[n++]=str[i];
            word[n]='\0';
            if(str[i+1]>='0'&&str[i+1]<='9'||i==l-1){
            k=atoi(num);
            while(k--){
                printf("%s",word);
            }
                m=n=0;
            }
        }
        //讀到下一個字元是數字或最後一組數字為止

       }
       printf("\n");
    }
    return 0;
}
