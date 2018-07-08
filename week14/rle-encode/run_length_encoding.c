#include<stdio.h>
#include<string.h>

main(){
    int ncase,i,l,count;
    char str[200];
    while(gets(str)!=NULL){
        l=strlen(str);
        count=1;
        for(i=0;i<l;i++){
            if(str[i]==str[i+1]){
                count++;
            }
            else{
                printf("%d%c",count,str[i]);
                count=1;
            }
        }
        printf("\n");
    }
    return 0;
}
