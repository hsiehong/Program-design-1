#include<stdio.h>
#include<string.h>
#define LEN 2000

int len1,len2;
connect(char *s1,char *s2){
    int k,i;
    k=(len1<len2)?len1:len2;
    while(1){
        if(strncmp(s1+len1-k,s2,k)==0){
            for(i=k;i<len2;i++)s1[len1++]=s2[i];
            s1[len1]='\0';
            break;
        }
        k--;
    }
}
main(){
    int ncase,num;
    char s1[LEN],s2[300];
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&num);
        scanf("%s",s1);
        num--;
        len1=strlen(s1);
        while(num--){
            scanf("%s",s2);
            len2=strlen(s2);
            connect(s1,s2);
        }
        printf("%d\n%s\n",strlen(s1),s1);
    }
    return 0;
}
