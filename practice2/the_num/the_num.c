#include<stdio.h>
#include<string.h>

main(){
    char N[3],M[8];
    int i,count;
    while(scanf("%s %s",N,M)!=EOF){
    count=0;
    for(i=0;i<6;i++){
        if(M[i]==N[0]&&M[i+1]==N[1]){
            count++;
        }
    }
        printf("%d\n",count);
    }
    return 0;
}
