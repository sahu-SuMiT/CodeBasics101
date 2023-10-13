#include <stdio.h>                                     //using the Binomial relation nCr=nCr-1(n-r-1)/r
int main(){
  int num=5;                                           //num=number of lines pascal triangle executes
  int n=0,r=0,nCr_1=1,nCr;                             
  for(int n=0;n<num;n++){
    for(int space=1;space<=num-n;space++){
      printf(" ");
    }
    for(int r=0;r<=n;r++){

      if(r==0||n==0){
        printf("%d ",nCr_1);    
      }

      else{
        nCr=nCr_1*(n-r+1)/r;
        printf("%d ",nCr);
        nCr_1=nCr;
      }
    }printf("\n");
  }
}
