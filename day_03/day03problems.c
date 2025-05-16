#include <stdio.h>
// non zero ->true , zero->false
// switch case
int main(){

    int x,y;
    scanf("enter year: %d",&x);
    scanf("enter months: %d",&y);
    
    switch (x)
    {
    case 1:
        printf("January 31days");
        break;
    case 2:
        printf("February");
        if(((year%4==0)-(year%100!=0))||(year%400==0)) printf("29");
        else printf("28");
        break;
    case 3:
        printf("march 31days");
        break;
    case 4:
        printf("april 30days");
        break;
    case 5:
        printf("may 31days");
        break;
    case 6:
        printf("june 30days");
        break;
    case 7:
        printf("july 31days");
        break;
    case 8:
        printf("august 31days");
        break;
    case 9:
        printf("september 30days");
        break;
    case 10:
        printf("October 31days");
        break;
    case 11:
        printf("November 30days");
        break;
    case 12:
        printf("December 31days");
        break;
    default:
        printf("not in the month list");
        break;
    }

    // method 2

    if(days==1||days==3||days==5)  printf("31 days");

    else if(days==4) printf("30");

    else(if((year%4==0)-(year%100!=0))||(year%400==0)) printf("29");

    else printf("28");

    //alphate

    char letter;
    scanf("%c",&letter);
    if(letter=='a'||letter=='A'||letter=='e'||letter=='E'||letter=='i'||letter=='I'||letter=='o'||letter=='O'||letter=='u'||letter=='U') printf("the given letter is alphate");
    else printf("the given letter is not an alphate");

    //problem

    int num1,num2,method;
    printf("add=1,sub=2,multi=3,div=4")
    scanf("%d%d",&num1,&num2);
    scanf("%d",&method);
    switch (method)
    {
    case 1:
        printf("add: %d%d",num1+num2);
        break;
    case 2:
        printf("add: %d%d",num1-num2);
        break;
    case 3:
        printf("add: %d%d",num1*num2);
        break;
    case 4:
        printf("add: %d%d",num1/num2);
        break;
    default:
        printf("invalid");
        break;
    }

    return 0;

}
    