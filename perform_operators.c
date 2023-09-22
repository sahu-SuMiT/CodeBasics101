// 3. Take 2 non negative number and perform operations
#include <stdio.h>
#include <conio.h>
int main() {
    int num1,num2,add,sub,mul,div,modu;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    if (num2==0){
        printf("Error as num/0 is not possible as it will go to infinity");
    }
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    modu=num1%num2;
    printf("Addition is %d\nSubtraction is %d\nMultiplication is %d\nDivison is %d\nModulo is %d",add,sub,mul,div,modu);
    return 0;
}