#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a/97){
        printf("It is divisible by 97");
    }else{
        printf("It's NOT divisible by 97");
    }


    return 0;
}