#include <stdio.h>

int main(){

    int i = 0;

    while (i <= 10){

      if(i % 2 ==0){
        printf(" O %d número é par!\n",i);
      }
      
      i++;
    }

    return 0;
}