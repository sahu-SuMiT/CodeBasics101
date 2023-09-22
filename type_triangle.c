// 4. Type of triangle
#include <stdio.h>
#include <conio.h>
int main() {
    int len1,len2,len3;
    printf("Enter side 1: ");
    scanf("%d",&len1);
    printf("Enter side 2: ");
    scanf("%d",&len2);
    printf("Enter side 3: ");
    scanf("%d",&len3);
    if (len1+len2>len3){
        if (len2+len3>len1){
            if (len1+len3>len2) {
                if (len1==len2 && len2==len3){
                    printf("It is an equilateral triangle");
                }
                else if (len1!=len2 || len2!=len3 || len3!=len1){
                    if (len1==len2 || len2==len3 || len3==len1) {
                        printf("It is a isosceles triangle");
                    }
                    else{
                        printf("It is a scalene triangle");
                    }
                }
            }
            else {
                printf("This type of triangle is not possible");
            }
        }
        else{
            printf("This type of triangle is not possible");
        }
    }
    else{
        printf("This type of triangle is not possible");
    }
    return 0;
}