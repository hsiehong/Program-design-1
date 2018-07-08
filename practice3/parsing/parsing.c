#include<stdio.h>
#include<string.h>
#define LEN 300

main(){
    char arr[LEN],*token;
    char sep[]=" ';,.";
    int sum;
    while(gets(arr)!=NULL){
        sum=0;
        token=strtok(arr,sep);
        while(token!=NULL){
            sum+=atoi(token);
            token=strtok(NULL,sep);
        }
    printf("%d\n",sum);
    }
    return 0;
}
