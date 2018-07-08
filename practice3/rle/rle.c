#include<stdio.h>
#include<string.h>
#define LEN 200

main(){
    char line[LEN];
    int l,i,count;
    while(gets(line)!=NULL){
        l=strlen(line);
        count=1;
        for(i=0;i<l;i++){
            if(line[i]!=line[i+1]||line[i+1]=='\0'){
                printf("%d%c",count,line[i]);
                count=1;
            }
            else{
                count++;
            }
        }
        printf("\n");
    }
    return 0;
}
