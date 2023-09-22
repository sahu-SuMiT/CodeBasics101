// 5. Mach number fluid 
#include <stdio.h>
#include <conio.h>
int main() {
    float machnum;
    printf("Enter Mach number: ");
    scanf("%f",&machnum);
    if (machnum<1){
        printf("Subsonic Flow");
    }
    else if (machnum==1){
        printf("Sonic Flow");
    }
    else if (machnum>1 && machnum<1.2){
        printf("Transonic Flow");
    }
    else if (machnum>=1.2 && machnum<=3){
        printf("Supersonic Flow");
    }
    else if (machnum>3 && machnum<=5){
        printf("High Supersonic Flow");
    }
    else if (machnum>5 && machnum<=10){
        printf("Hypersonic Flow");
    }
    else if (machnum>10){
        printf("Hypervelocity");
    }
    else{
        printf("Enter appropriate data");
    }
    return 0;
}