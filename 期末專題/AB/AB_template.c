#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//根據需求自由使用--->

//<---根據需求自由使用
char* guess(char* result){//對每個正解第一次猜測時->result="0000"
    static char answer[5];
    //實作猜測副程式--->

    //<---實作猜測副程式
    return answer;
}
char* check(char* answer, char* ground_truth){
    static char result[5];
    //實作批改副程式--->
    
    //<---實作批改副程式
    return result;//如果answer不符合正確格式->result="XXXX"
}

//請勿更動--->
char* generate_ground_truth(){
    static char numbers[]="0123456789";
    static char ground_truth[5];
    int i,j;
    for(i=0;i<9;i++){
        j=i+rand()/(RAND_MAX/(9-i)+1);
        char c=numbers[j];
        numbers[j]=numbers[i];
        numbers[i]=c;
    }
    strncpy(ground_truth,numbers,4);
    ground_truth[4]='\0';
    return ground_truth;
}

int main(){
    int i,total_guess=0;
    srand(time(0));
    for(i=0;i<50;i++){
        char *ground_truth=generate_ground_truth(),*result="0000";
        printf("%s\n",ground_truth);
        while(1){
            result=check(guess(result),ground_truth);
            total_guess++;
            if(strcmp(result,"4A0B")==0)break;
        }
    }
    printf("%d\n",total_guess);
}
//<---請勿更動