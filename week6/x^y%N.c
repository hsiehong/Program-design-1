/*Problem Description
Find (x^y)%N, where x, y, and N are 32-bits positive integers and N&lt;=10000.
Input Format
�C���J������ݭn��x,y,N�T�ơA�䤤 N&lt;=10000�A������J3��0(�Yx�By�Bn��
����0)�ɵ����{��
Output Format.
�C�@�մ���᭱�һݭn������A�L�X(x^y)%N������*/

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
