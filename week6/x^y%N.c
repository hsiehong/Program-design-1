/*Problem Description
Find (x^y)%N, where x, y, and N are 32-bits positive integers and N&lt;=10000.
Input Format
每行輸入的測資需要有x,y,N三數，其中 N&lt;=10000，當測資輸入3個0(即x、y、n皆
等於0)時結束程式
Output Format.
每一組測資後面皆需要有換行，印出(x^y)%N的答案*/

#include<stdio.h>
main(){
    int testcase=100;
    int x,y,n,a,remain;
    while(testcase--){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        scanf("%d%d",&y,&n);
        remain=1;
        for(a=0;a<y;a++){

            remain*=x%n;
            remain%=n;
        }
        printf("%d\n",remain);
    }

    return 0;
}
