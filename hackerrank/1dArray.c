#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,sum;
    num=0;
    sum=0;
    scanf("%d", &num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        sum = sum + arr[i];
    }
    
    printf("%d",sum);
    
    return 0;
}
