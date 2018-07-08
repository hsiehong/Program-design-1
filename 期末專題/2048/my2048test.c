#include<stdio.h>
#include<string.h>
#define D 4
void show(int arr[D][D]){
    int a,b,flag=0,t;
    for(a=0;a<4;a++){
        for(b=0;b<4;b++){
            printf("%d",arr[a][b]);
            if(b<3)printf(" ");
        }
        if(a<3)printf("\n");
    }
    //check the result
    t=flag=0;
    for(a=0;a<4;a++){
        for(b=0;b<4;b++){
            if(arr[a][b]!=0)t++;//若16個都非0，表示輸喽(有64就贏了)
            if(t==16)flag=-1;
        }
    }
    for(a=0;a<3;a++)for(b=0;b<3;b++)if(arr[a][b]==arr[a][b+1])flag=0;
    for(b=0;b<3;b++)for(a=0;a<3;a++)if(arr[a][b]==arr[a+1][b])flag=0;

    for(a=0;a<4;a++)for(b=0;b<4;b++)if(arr[a][b]>=64)flag=1;
    if(flag==1)printf("\nYou win");
    if(flag==-1)printf("\nGame over");
}

main(){
    //freopen("final.txt","w",stdout);
    int arr[D][D],i,j,test[D],d,temp[D];
    int ncase,a,b;
    char act;
    scanf("%d",&ncase);
    while(ncase--){
        for(i=0;i<4;i++)for(j=0;j<4;j++)scanf("%d ",&arr[i][j]);
        scanf("%c",&act);
        //上
        if(act=='w'){
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
        else if(act=='a'){
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
        else if(act=='s'){
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
        else if(act=='d'){
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
        }
        show(arr);
        if(ncase>0)printf("\n\n");
    }
    return 0;
}
