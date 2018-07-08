#include<stdio.h>
#include<string.h>
#define LEN 1000
main(){
    int ncase,l1,l2,i;
    char p[LEN],q[LEN],r[LEN],temp[LEN];
    scanf("%d",&ncase);
    getchar();//Åª±¼´«¦æ¦r¤¸
    while(ncase--){
        gets(p);l1=strlen(p);
        gets(q);l2=strlen(q);
        gets(r);
        //printf("%s\n%s\n%s\n",p,q,r);
        //printf("l1:%d\nl2:%d",l1,l2);
        i=0;
        while(i<l1){
            if(i+l2<=l1){
                int j=0;
                while(j<l2){
                        temp[j]=p[i+j];
                        j++;
                    }temp[j]='\0';
                }
                int j;
                if(strcmp(temp,q)==0){
                    printf("%s",r);
                    i+=l2;
                    for(j=0;j<LEN;j++)temp[j]=0;//break the temp
                }
                else{
                    printf("%c",p[i]);
                    i++;
                }
        }
        printf("\n");
    }
    return 0;
}
/*if(strncmp(p+i,q,l2)==0){
                printf("%s",r);
                i+=l2-1;
            }
            else{
                printf("%c",p[i]);
                i++;
            }*/
