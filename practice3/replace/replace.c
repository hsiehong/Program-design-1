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
            for(i=0;i<LEN;i++)temp[i]=0;//�}�a��temp���Ms2�ܪ����ɭԫ᭱�N���|�i�Ĥ@�ӧP�_���A�p��temp�û����|��s2�@��
        }
        printf("\n");
    }
    return 0;
}
