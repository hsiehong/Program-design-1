#include<stdio.h>
#include<string.h>

main(){
    int ncase,l,i,mymax;
    scanf("%d ",&ncase);
    char arr[1000];
    int book[26];
    while(ncase--){
        for(i=0;i<26;i++)book[i]=0;
        gets(arr);
        l=strlen(arr);
        for(i=0;i<l;i++){
            if(arr[i]>='a'&&arr[i]<='z')book[arr[i]-'a']++;
            if(arr[i]>='A'&&arr[i]<='Z')book[arr[i]-'A']++;
        }
        mymax=0;
        for(i=0;i<26;i++){
           if(book[i]>mymax){
                mymax=book[i];
           }
        }
        for(i=0;i<26;i++){
            if(book[i]==mymax){
                printf("%c",'A'+i);
            }
        }
        if(ncase>0)printf("\n");
    }
    return 0;
}
