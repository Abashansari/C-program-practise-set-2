#include<stdio.h>
int main(){
    int x=2,y=3,z=3,k=1;
    // now evaluation  will be step by step of (3*x/y-z+k)-------------------------------------->
 

      int  cal= 3*x;   
      int cal_1= cal/y; 
      int cal_2= cal_1-z;
      int cal_3= cal_2+k;
      printf(" the evaluation of (3*x/y-z+k) is :%d",cal_3);
}