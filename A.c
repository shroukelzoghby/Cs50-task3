#include <stdio.h>
#include <cs50.h>

int main(void){
    int length =get_int("how many of length?");
    int arr[length];
    int result=0;
    for(int i =0;i<length;i++){
        arr[i]=get_int("number: ");
        result += arr[i];
    }
    printf("average %f\n",result/(float)length);
}