#include<stdio.h>
 int avg(int a ,int b,int c,int d,int e);
 int main(){
 int a,b,c,d,e ;
  printf("enter 5 numbers");
  scanf(" %d %d %d %d %d ",&a,&b,&c,&d,&e);
   printf("the avg is %f",avg(a,b,c,d,e));
    return 0;
    }
    int avg(int a,int b,int c,int d,int e)
    {
     int sum=(a+b+c+d+e);
    avg=sum/5;
       return avg ;
       }
