/*�g�@�ӵ{�����ѽ�]�ơC��J�@���n�C��X��n���Ҧ���]�ƤΨ䦸��C��X�ɽ�]�ƥѤp��
��j�C����X��]�ƦA��X����C�Ҧp:�w�U��X��J�d�Ҫ��
123456 = X X
Input Format
The first line contains an integer n which indicates the number of test cases,n&lt;10. Each of the next n
lines is a test case which contains a positive number N, 1 &lt; N &lt; 100000000.
Output Format.
��X�C��input���Ҧ���]�ƤΦ���A��]�ƥѤp�ƨ�j�A����X��]�ƦA�U�@���X����A
�C���output�����ݥH�@�ӪŦ��}*/

#include<stdio.h>
main(){
    int testcase,a;//������
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
