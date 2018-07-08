/*The Input
The input will consist of a series of pairs of integers i and j, one pair of
integers per line. All integers will be less than 1,000,000 and greater than 0.
You should process all pairs of integers and for each pair determine the
maximum cycle length over all integers between and including i and j.
You can assume that no operation overflows a 32-bit integer. Program
should stop at i=0 and j=0.
The Output
For each pair of input integers i and j you should output i, j, and the
maximum cycle length for integers between and including i and j. These
three numbers should be separated by at least one space with all three
numbers on one line and with one line of output for each line of input. The
integers i and j must appear in the output in the same order in which they
appeared in the input and should be followed by the maximum cycle length
(on the same line).*/

#include<stdio.h>

main()
{
    int a,b,i,ii,temp;
    int k;
    for(k=0;k<100;k++){

    scanf("%d%d",&a,&b);
    int maxtime=0,temptime;
    int aa=a,bb=b;
    if(a>b){
        temp=b;
        b=a;
        a=temp;
    }
    for(i=a; i<=b; i++)
    {
        ii=i;
        temptime=1;
        if(ii!=0)
        {
            while(ii!=1)
            {

                if(ii%2==0)
                {
                    ii/=2;
                }
                else
                {
                    ii=3*ii+1;
                }

                temptime++;
            }
            if(temptime>maxtime)
            {
                maxtime=temptime;
            }

        }
        else
        {
            break;
        }
    }
    if(a!=0&&b!=0)
    {
        printf("%d %d %d\n",aa,bb,maxtime);
    }
    if(a==0||b==0)
        break;

    }
    return 0;
}
