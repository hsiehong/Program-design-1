#include<stdio.h>
#include<string.h>
#include<time.h>
#define number 5

void deal(char community[5][2])
{
    int deck[52]={0};   //�����P�ո̭����ǵP�Q�o���F
    char num[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'}; //�U�ӼƦr�����쪺�r
    char suit[4]={'C','D','H','S'}; //�U�Ӫ��������r
    int card,i;
    for(i=0;i<number;i++)
    {
        card=rand()%52;  //�H�����@��0~51���ü�
        while(deck[card]!=0)card=rand()%52;   //�p�G���e���o�L�o�i�P�F�N�n���o
        deck[card]=1;    //�����o���o���i�P
        community[i][0]=suit[card/13];  //�ݬO���Ӫ��
        community[i][1]=num[card%13];   //�ݬO���ӼƦr
    }
}

int main()
{
    char community[5][2];
    srand(time(NULL));  //�üƺؤl�A���Ҥ��i�H���j��̭�
    deal(community);
    int i;
    for(i=0;i<5;i++)printf("%c%c\n",community[i][0],community[i][1]);
    return 0;
}
