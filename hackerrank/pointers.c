#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int diff, sum;
    
    sum = *a + *b;    
    diff = abs(*a - *b);
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("Input two nums hit enter between\n");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("Sum: %d\nDiff: %d\n", a, b);

    return 0;
}

