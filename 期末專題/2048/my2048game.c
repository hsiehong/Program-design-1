#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define D 4
#define N 100

int arr[D][D],test[D],temp[D];
int t,d,i,j,a,b,flag,val,count;
char act,line[N];

init(){
    count=0;
    for(i=0;i<4;i++)for(j=0;j<4;j++)arr[i][j]=0;
    srand(time(NULL));
    d=2;
    while(d--){
        a=rand()%4;
        b=rand()%4;
        arr[a][b]=2;
    }
    printf("\nGame Start !\n\n");
}
ask(){
    printf("Please enter the value U want to play:\n");
    scanf("%d",&val);
    getchar();
}

command(){
    printf("enter your command:\n");
    gets(line);
    act=line[0];
        //上
        if(act=='w'||act=='W'){
            for(j=0;j<4;j++){
                for(i=0;i<4;i++)test[i]=temp[i]=0;
                d=0;
                for(i=0;i<4;i++)if(arr[i][j]!=0)test[d++]=arr[i][j];
                for(i=0;i<3;i++){
                    if(test[i]==test[i+1]){
                        test[i]*=2;
                        test[i+1]=0;
                    }
                }
                d=0;
                for(i=0;i<4;i++)if(test[i])temp[d++]=test[i];
                for(i=0;i<4;i++)arr[i][j]=temp[i];
            }
        }
        //左
        else if(act=='a'||act=='A'){
            for(i=0;i<4;i++){
                for(j=0;j<4;j++)test[j]=temp[j]=0;//test:把每列都抓出來個別做運算;temp:把運算完出現的0篩掉
                d=0;
                for(j=0;j<4;j++)if(arr[i][j]!=0)test[d++]=arr[i][j];//排除0
                for(j=0;j<3;j++){
                    if(test[j]==test[j+1]){
                        test[j]*=2;
                        test[j+1]=0;
                    }
                }
                d=0;
                for(j=0;j<4;j++)if(test[j])temp[d++]=test[j];//把運算後出現的0篩掉
                for(j=0;j<4;j++)arr[i][j]=temp[j];
            }
        }
        //下
        else if(act=='s'||act=='S'){
            for(j=0;j<4;j++){
                for(i=0;i<4;i++)test[i]=temp[i]=0;
                d=0;
                for(i=3;i>=0;i--)if(arr[i][j]!=0)test[d++]=arr[i][j];
                for(i=0;i<3;i++){
                    if(test[i]==test[i+1]){
                        test[i]*=2;
                        test[i+1]=0;
                    }
                }
                d=0;
                for(i=0;i<4;i++)if(test[i])temp[d++]=test[i];
                d=0;
                for(i=3;i>=0;i--)arr[i][j]=temp[d++];
            }
        }
        //右
        else if(act=='d'||act=='D'){
            for(i=0;i<4;i++){
                for(j=0;j<4;j++)test[j]=temp[j]=0;
                d=0;
                for(j=3;j>=0;j--)if(arr[i][j])test[d++]=arr[i][j];
                for(j=0;j<3;j++){
                    if(test[j]==test[j+1]){
                        test[j]*=2;
                        test[j+1]=0;
                    }
                }
                d=0;
                for(j=0;j<4;j++)if(test[j])temp[d++]=test[j];
                d=0;
                for(j=3;j>=0;j--)arr[i][j]=temp[d++];//雖然是往右做運算，temp,test都是由前往後存
            }
        }count++;
}

add(){
    t=0;
    while(1){
        a=rand()%4;
        b=rand()%4;
        if(arr[a][b]==0){
            arr[a][b]=2;

            break;
        }
        t++;
        if(t>200)break;
    }
}

show(){
    printf(" ---------------------\n");
    for(a=0;a<4;a++){
        for(b=0;b<4;b++){
            printf(" |%3d",arr[a][b]);
        }
        printf(" |\n");

        printf(" ---------------------");
        printf("\n");
    }printf("\n");
}

int check(){
    flag=0;
    //輸了 flag=-1
    t=0;
    for(a=0;a<4;a++){
        for(b=0;b<4;b++){
            if(arr[a][b]!=0)t++;//若16個都非0，表示輸喽(有64就贏了)
            if(t==16)flag=-1;
        }
    }
    //有0繼續 flag=0
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(arr[i][j]==0){
                flag=0;
                break;
            }
        }
    }
    //有相鄰兩格相同，繼續
    for(a=0;a<4;a++)for(b=0;b<3;b++){
        if(arr[a][b]==arr[a][b+1]){
           flag=0;
           break;
        }
    }
    for(b=0;b<4;b++)for(a=0;a<3;a++){
        if(arr[a][b]==arr[a+1][b]){
           flag=0;
           break;
        }
    }

    //贏了 flag=1
    for(a=0;a<4;a++)for(b=0;b<4;b++)if(arr[a][b]==val)flag=1;
    return flag;
}

int next(){
    char yn;
    printf("\nDo U want to play again? 'y/Y'for sure 'n/N'for no.\n");
    scanf("%c",&yn);
    getchar();
    if(yn=='y'||yn=='Y'){
        ask();
        init();
        show();
        return 0;
    }
    else if(yn=='n'||yn=='N'){
        printf("\nSee U~~\n");
        return 1;
    }
    else return 0;
}

main(){
    ask();
    init();
    show();
    while(1){
        command();
        add();
        show();
        flag=check();
        if(flag==1){
            printf("\nYou Win !!\n");
            printf("You use '%d' steps to form %d\n",count,val);
            t=next();
            if(t==0)continue;
            else if(t==1)break;
        }
        else if(flag==-1){
            printf("\nGame Over and U are just a LoSeR QQ\n");
            printf("You use '%d' steps to lose the game, haha\n",count,val);
            t=next();
            if(t==0)continue;
            else if(t==1)break;
        }
    }
    return 0;
}
