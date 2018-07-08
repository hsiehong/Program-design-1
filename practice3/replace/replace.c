#include<stdio.h>
#include<string.h>
#define LEN 1000

main(){
    int ncase,l1,l2,i,j;
    char s1[LEN],s2[LEN],s3[LEN],temp[LEN];
    scanf("%d ",&ncase);
    while(ncase--){
        gets(s1);l1=strlen(s1);
        gets(s2);l2=strlen(s2);
        gets(s3);
        i=0;
        while(i<l1){
            if(i+l2<=l1){
                    j=0;
                    while(j<l2){
                        temp[j]=s1[i+j];
                        j++;
                    }temp[j]=0;
                }
            if(strcmp(temp,s2)==0){
                printf("%s",s3);
                i+=l2;
            }
            else{
                printf("%c",s1[i++]);
            }
            for(i=0;i<LEN;i++)temp[i]=0;//破壞掉temp不然s2很長的時候後面就不會進第一個判斷式，如此temp永遠都會跟s2一樣
        }
        printf("\n");
    }
    return 0;
}
