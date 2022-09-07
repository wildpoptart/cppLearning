#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,temp;
    scanf("%d", &n);
    temp=0;
    int len=n*2-1;
    int arr[len];
    
    //my way completes but can take longer for larger numbers 
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            for(int k=0;k<=i;k++){
                if(i==k || j==k || i==len-(k+1) || j==len-(k+1)){arr[j]=(n-k);;break;}
                else if(i==k+1 || j==k+1 || i==len-(k+2) || j==len-(k+2)){arr[j]=(n-(k+1));;break;}
                else if(i==k-1 || j==k-1 || i==len-(k-1) || j==len-(k-1)){arr[j]=(n-(k-1));;break;}
            }
        }
        for(int x=0;x<len;x++){
            printf("%d ", arr[x]);
        }
        printf("\n");
    }
    
    //intended way that is faster
    /*
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min =0;
            if(i<j){min=i;}else{min=j;}
            if(min<len-i){min=min;}else{min=len-i-1;}
            if(min<len-j-1){min=min;}else{min=len-j-1;}
            printf("%d ", n-min);
        }
        printf("\n");
    }
    */ 
    return 0;
}
