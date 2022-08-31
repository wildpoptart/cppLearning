#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n=0, mod=0, sum = 0;
    scanf("%d", &n);
    
    mod = n % 10;
    n = n - mod;
    sum = sum + mod;
    
    for(int i=0;i<4;i++){
        n = n / 10;
        mod = n % 10;
        n = n - mod;
        sum = sum + mod;
    }
    
    printf("%d\n",sum);

    return 0;
}
