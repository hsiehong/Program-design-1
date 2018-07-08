#include<stdio.h>
#include<string.h>
#define LEN 3000

int len1,len2;
void connect(char *str1,char *str2){
    int k,i;
    k=(len1<len2)?len1:len2;//兩字串較小的長度
    while(1){
        //若兩字串沒有可以銜接的，即k=0，strncmp回傳0
        if(strncmp(str1+len1-k,str2,k)==0){
            for(i=k;i<len2;i++)str1[len1++]=str2[i];
            str1[len1]='\0';
            break;
        }
        k--;
    }
}
main(){
    //freopen("ST14.in","r",stdin);
    //freopen("ff.txt","w",stdout);
    int ncase,num;
    char str1[LEN],str2[300];
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&num);//字串個數
        scanf("%s",str1);num--;//先讀入一個
        len1=strlen(str1);
        //接下來讀一個字串接一次
        while(num--){
            scanf("%s",str2);
            len2=strlen(str2);
            connect(str1,str2);
        }
        printf("%d\n",strlen(str1));
        printf("%s\n",str1);
    }
    return 0;
}
