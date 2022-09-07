#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ARR_LEN = 10;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char string[1000] ="";
    int arr[ARR_LEN];
    
    for(int i=0;i<ARR_LEN;i++){   
        arr[i]=0;
    }
    
    scanf("%s",string);
    //printf("%s\n",string);
    //printf("%c\n",string[2]);
    
    for(int i=0;i<strlen(string);i++){
        for(int j=0;j<ARR_LEN;j++){
            if(string[i]== j+'0'){arr[j]++;}
        }
    }
    
    for(int k=0;k<ARR_LEN;k++){   
        printf("%d ",arr[k]);
    }
    
    return 0;
}
