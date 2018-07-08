#include<stdio.h>
#include<string.h>
#define LEN 50

main(){
    int ncase,len1,len2,len3,i,j,k;
    char s1[LEN],s2[LEN],s3[LEN];
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%s %s",s1,s2);
        //printf("%s\n%s",s1,s2);
        len1=strlen(s1);
        len2=strlen(s2);
        strrev(s1);
        strrev(s2);
        for(i=len1;i<LEN;i++)s1[i]='0';
        for(i=len2;i<LEN;i++)s2[i]='0';

        len3=(len1>len2)?len1:len2;
        s3[len3]=0;
        for(i=0;i<len3;i++){
            s3[i]=s1[i]-'0'+s2[i]-'0';
        }
        for(i=0;i<len3;i++){
            s3[i+1]+=s3[i]/10;
            s3[i]%=10;
        }
        if(s3[len3])printf("%c",s3[len3]+'0');
        for(i=len3-1;i>=0;i--)printf("%c",s3[i]+'0');
        if(ncase>0)printf("\n");
    }
    return 0;
}
