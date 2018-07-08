/*Problem Description
Merge是將兩個由小到大排好序的陣列，將它合併成一個排好序的陣列。本題
來實作一個merge程式，不可使用排序。
假設輸入兩個陣列A與B，個數是NA與NB，我們打算把合併結果放在C陣列。我
們使用註標變數ia與ib分別代表目前兩陣列目前尚未輸出的最小值位置。每次我
們比對A[ia]與B[ib]，將比較小的輸出，並將註標往下一個移動，直到其中一個
陣列已全部輸出，最後把剩下的陣列的其餘元素依序輸出。
為了答案的唯一性，我們規定，如果兩元素相同時，在第一陣列的元素應該被
當作比較小先輸出。
Input Format
第一行是測資筆數T。每筆測資三行：第一行是兩個數字NA與
NB，1<=NA,NB<=1000。第二行有NA個排好序的整數，第三行有NB個排好序的整
數。
Output Format.
每筆測資先輸出兩行，第一行輸出整個過程中執行多少次元素大小的比對，第
二行輸出合併後的陣列內容，如果NA+NB<=6則輸出合併後的整個陣列，否則輸
出前三個與後三個。*/

#include<stdio.h>

main(){
    //freopen("merge.in","r",stdin);
    //freopen("out.txt","w",stdout);
    int ncase,na,nb;//測資比數，兩筆測資個數
    int x,y;
    int ia,ib,ic,com;//存入C陣列位置指標
    int a,b,c;
    scanf("%d",&ncase);
    while(ncase--){
        com=0;
        x=y=0;
        scanf("%d%d",&na,&nb);
        int NA[na],NB[nb],NC[na+nb];
        for(a=0;a<na;a++){
            scanf("%d",&NA[a]);
       }
        for(b=0;b<nb;b++){
            scanf("%d",&NB[b]);
       }
       ia=ib=ic=0;
       while(ia!=na&&ib!=nb){
            if(NA[ia]<=NB[ib]){
                NC[ic++]=NA[ia++];
                com++;
            }
            else{
                NC[ic++]=NB[ib++];
                com++;
            }
       }
       int ra=ia,rb=ib;
       if(ia==na){
        for(c=ia+ib;c<na+nb;c++){
            NC[c]=NB[rb++];
        }
       }
       else{
        for(c=ia+ib;c<na+nb;c++){
            NC[c]=NA[ra++];
        }
       }
       printf("%d\n",com);
       if(na+nb<=6){
        for(a=0;a<na+nb;a++){
            printf("%d",NC[a]);
            if(a!=na+nb-1)printf(" ");
        }printf("\n");
       }
       else{
        printf("%d %d %d %d %d %d",NC[0],NC[1],NC[2],NC[na+nb-3],NC[na+nb-2],NC[na+nb-1]);
        printf("\n");
       }
    }
return 0;
}
