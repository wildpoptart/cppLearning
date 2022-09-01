#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  
    int and = 0;
    int or = 0;
    int xor  = 0;
    int largest = 0;

    for (int i=1; i<=n; i++){
        for(int j=n; j>=2; j--){
            and = i & j;   
            if(i == j){break;}
            if(and>largest && and<k){
                largest=and;}
            //printf("%d and %d = %d\n ",i,j, and);
        }
    }
    printf("%d\n", largest);
    largest = 0;
    
    for (int i=1; i<=n; i++){
        for(int j=n; j>=2; j--){
            or = i | j;   
            if(i == j){break;}
            if(or>largest && or<k){
                largest=or;}
        }
    }
    printf("%d\n", largest);
    largest = 0;
    
    for (int i=1; i<=n; i++){
        for(int j=n; j>=2; j--){
            xor = i ^ j;   
            if(i == j){break;}
            if(xor>largest && xor<k){
                largest=xor;}
        }
    }
    printf("%d\n", largest);
    largest = 0;
    
    }
       
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
