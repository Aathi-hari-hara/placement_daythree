#include <stdio.h>

int main(){

    // method 2

    if(days==1||days==3||days==5)  printf("31 days");

    else if(days==4) printf("30");

    else(if((year%4==0)-(year%100!=0))||(year%400==0)) printf("29");

    else printf("28");

    return 0;
}