#include<stdio.h>
#include<string.h>
#define N 250

main(){
    int len,i,sum;
    char line[N],*token;
    char tok[]={" ,;"};
    while(gets(line)!=NULL){
        sum=0;
        len=strlen(line);
        token=strtok(line,tok);
        while(token!=NULL){
            sum+=atoi(token);
            token=strtok(NULL,tok);
        }
        printf("%d\n",sum);
    }
    return 0;
}
