#include<stdio.h>
#include<string.h>

main(){
    int ncase,l,a,mymax;
    char arr[6666],c[26];
    scanf("%d ",&ncase);//記得要空格
    while(ncase--){
        for(a=0;a<26;a++)c[a]=0;//記分板
        gets(arr);
        l=strlen(arr);
        for(a=0;a<l;a++){
            if(arr[a]>='a'&&arr[a]<='z')c[arr[a]-'a']++;
            if(arr[a]>='A'&&arr[a]<='Z')c[arr[a]-'A']++;
        }
        //找最大次mymax
        mymax=0;
        for(a=0;a<26;a++){
            if(c[a]>mymax)mymax=c[a];
        }
        //輸出
        for(a=0;a<26;a++){
            if(c[a]==mymax)printf("%c",'A'+a);
        }
        if(ncase>0)printf("\n");
    }
    return 0;
}
