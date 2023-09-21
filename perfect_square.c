// perfect square or not Ryan Bcs057
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
    int number,sqnum;
    printf("Enter a number: ");
    scanf("%d",&number);
    sqnum=sqrt(number);
    if (sqnum*sqnum==number){
        printf("This is a perfect square number");
    }
    else if (sqnum*sqnum!=number) {
        printf("This is not a perfect square number");
    }
    return 0;
}