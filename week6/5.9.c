/*寫一個程式分解質因數。輸入一整數n。輸出為n的所有質因數及其次方。輸出時質因數由小排
到大。先輸出質因數再輸出次方。例如:已下輸出輸入範例表示
123456 = X X
Input Format
The first line contains an integer n which indicates the number of test cases,n&lt;10. Each of the next n
lines is a test case which contains a positive number N, 1 &lt; N &lt; 100000000.
Output Format.
輸出每組input的所有質因數及次方，質因數由小排到大，先輸出質因數再下一行輸出次方，
每兩組output之間需以一個空行格開*/

#include<stdio.h>
main(){
    int testcase,a;//測資比數
    scanf("%d",&testcase);
    int testnum,testi,divisor,temptestnum,power;
    for(a=1;a<testcase;a++){
        scanf("%d",&testnum);
        temptestnum=testnum;
            for(divisor=2;divisor<=testnum;divisor++){
                power=0;
                while(temptestnum%divisor==0){
                    temptestnum/=divisor;
                    power++;

                    if(temptestnum==1){
                        break;
                    }
                    //printf("%d\n",temptestnum);
                }
                if(power!=0){
                    printf("%d\n",divisor);
                    printf("%d\n",power);
                }

            }
            printf("\n");
    }
    scanf("%d",&testnum);
        temptestnum=testnum;
            for(divisor=2;divisor<=testnum;divisor++){
                power=0;
                while(temptestnum%divisor==0){
                    temptestnum/=divisor;
                    power++;

                    if(temptestnum==1){
                        break;
                    }
                    //printf("%d\n",temptestnum);
                }
                if(power!=0){
                    printf("%d\n",divisor);
                    printf("%d\n",power);
                }
            }
    return 0;
}
