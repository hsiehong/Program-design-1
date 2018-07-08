#include<stdio.h>
#include<string.h>
#define LEN 2000

main(){
    char num[LEN],word[LEN],line[LEN];
    int l,m,n,k,i;
    while(gets(line)!=NULL){
            m=n=0;
        l=strlen(line);
        for(i=0;i<l;i++){
            if(line[i]>='0'&&line[i]<='9'){
                num[m++]=line[i];
                num[m]='\0';
            }
            else{
                word[n++]=line[i];
                word[n]='\0';
                if(line[i+1]>='0'&&line[i+1]<='9'||line[i+1]=='\0'){
                    k=atoi(num);
                    while(k--)printf("%s",word);
                    m=n=0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
