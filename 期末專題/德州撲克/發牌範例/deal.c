#include<stdio.h>
#include<string.h>
#include<time.h>
#define number 5

void deal(char community[5][2])
{
    int deck[52]={0};   //紀錄牌組裡面那些牌被發掉了
    char num[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'}; //各個數字對應到的字
    char suit[4]={'C','D','H','S'}; //各個花色對應的字
    int card,i;
    for(i=0;i<number;i++)
    {
        card=rand()%52;  //隨機取一個0~51的亂數
        while(deck[card]!=0)card=rand()%52;   //如果之前有發過這張牌了就要重發
        deck[card]=1;    //紀錄這次發哪張牌
        community[i][0]=suit[card/13];  //看是哪個花色
        community[i][1]=num[card%13];   //看是哪個數字
    }
}

int main()
{
    char community[5][2];
    srand(time(NULL));  //亂數種子，切忌不可以放到迴圈裡面
    deal(community);
    int i;
    for(i=0;i<5;i++)printf("%c%c\n",community[i][0],community[i][1]);
    return 0;
}
