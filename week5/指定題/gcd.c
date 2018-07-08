/*gcd 輸入兩正整數x與y，使用輾轉相除法計算最大公因數以及使用的除法(
除法取餘數)次數，假設第一次除法為x除以。1<=x<=y<=10^9*/

#include<stdio.h>
main(){
    int tc;//test case
    scanf("%d",&tc);
    int a;
    int x,y;//input
    int s;//餘數
    int temp1,temp2,times;
    for(a=0;a<tc;a++){
        s=1;
        times=0;
        scanf("%d%d",&x,&y);
        int m=x,n=y;
        while(s!=0){
            s=x%y;
            temp1=y;
            temp2=s;
            x=y;
            y=s;
            times++;
        }
        printf("gcd(%d,%d)=%d, using %d division.\n",m,n,x,times);
    }
    return 0;
}
