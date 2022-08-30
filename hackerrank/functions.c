#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max(int a, int b){
        
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int max_of_four(int a, int b, int c, int d){
    int ans1,ans2,ans3;
    
    ans1 = max(a,b);
    ans2 = max(c,d);
    ans3 = max(ans1,ans2);
        
    return ans3;
    
}

int main() {
    int a, b, c, d;
    printf("Input 4 number hit enter between each one\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("Largest num %d\n", ans);
    
    return 0;
}

