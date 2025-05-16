#include <stdio.h>

int main(){

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