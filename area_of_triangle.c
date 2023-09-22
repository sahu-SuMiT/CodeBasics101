// 2. area of right angled triangle
#include <stdio.h>
#include <conio.h>
int main() {
    float area,height,base;
    printf("Enter height of triangle: ");
    scanf("%f",&height);
    printf("Enter base of triangle: ");
    scanf("%f",&base);
    area=(0.5)*height*base;
    printf("Area of triangle is %f",area);
    return 0;
}