#include<stdio.h>
#include<string.h>
#define LEN 3000

int len1,len2;
void connect(char *str1,char *str2){
    int k,i;
    k=(len1<len2)?len1:len2;//��r����p������
    while(1){
        //�Y��r��S���i�H�α����A�Yk=0�Astrncmp�^��0
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
        scanf("%d",&num);//�r��Ӽ�
        scanf("%s",str1);num--;//��Ū�J�@��
        len1=strlen(str1);
        //���U��Ū�@�Ӧr�걵�@��
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
