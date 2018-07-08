#include<stdio.h>
#include<string.h>

main(){
    int n,m,i,j,l;
    char line[1000],mark[52];
    int data[50][52];
    for(i=0;i<=50;i++){
        for(j=0;j<52;j++)data[i][j]=0;
    }
    scanf("%d %d ",&n,&m);//n是集合個數，m是運算次數
    for(i=0;i<n;i++){
        gets(line);
        l=strlen(line);
        for(j=0;j<l;j++){
            if(line[j]>='A'&&line[j]<='Z')data[i][line[j]-'A']=1;
            else if(line[j]>='a'&&line[j]<='z') data[i][line[j]-'a'+26]=1;
        }
    }
    //運算 0-25 for upper,26-52 for lower
    while(m--){
        for(i=0;i<52;i++)mark[i]=0;//clear the mark
        int x,y,flag=1;
        char act;
        scanf("%d %c %d",&x,&act,&y);
        //+是聯集
        if(act=='+'){
            for(i=0;i<52;i++){
                if(data[x][i]==1||data[y][i]==1){
                    mark[i]=1;
                    flag=0;
                }
            }
            for(i=0;i<26;i++)if(mark[i]==1){printf("%c",i+'A');}
            for(i=26;i<52;i++)if(mark[i]==1){printf("%c",i-26+'a');}
            if(flag)printf("-1");
            printf("\n");
        }
        //*是交集
        else{
            for(i=0;i<52;i++){
                if(data[x][i]==1&&data[y][i]==1){
                    mark[i]=1;
                    flag=0;
                }
            }
            for(i=0;i<26;i++)if(mark[i]==1)printf("%c",i+'A');
            for(i=26;i<52;i++)if(mark[i]==1)printf("%c",i-26+'a');
            if(flag)printf("-1");
            printf("\n");
        }
    }
    return 0;
}
