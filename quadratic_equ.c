// Write a C program to input the coefficients of a quadratic equation and find the roots of equation Ryan BCS057
#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,alpha,beta,discriminant;
    printf("ax^2+bx+c=0 is quadratic equation\n");
    printf("Enter coefficient a b c with gap between them : ");
    scanf("%f %f %f", &a,&b,&c);
    discriminant=b*b-4*a*c;
    
    if(discriminant>0){
        printf("Real & Distinct roots \n");
        alpha=(-b+sqrt(discriminant))/2;
        beta=(-b-sqrt(discriminant))/2;
        printf("The roots are %f & %f\n",alpha,beta);   
    }

    if(discriminant==0){
        printf("Real & Equal roots \n");
        alpha=-b/2;
        printf("The root is %f \n",alpha);  
    }

    if(discriminant<0){                                        
        printf("Imaginary roots \n");
        discriminant=-discriminant;
        alpha=-b/2;                      // alpha=real part,
        beta=sqrt(discriminant)/2;       // beta=imaginary part
        printf("The roots are %f + %fi  &  %f - %fi \n",alpha,beta,alpha,beta);
    }
    return 0;
}   
