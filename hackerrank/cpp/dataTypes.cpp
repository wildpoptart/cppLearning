#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char ch;
    int num;
    long numL;
    float numF;
    double numD;
		        
    scanf("%d %ld %c %f %lf",&num,&numL,&ch,&numF, &numD);
    printf("%d\n%ld\n%c\n%f\n%lf", num, numL, ch, numF, numD);
    return 0;
}

