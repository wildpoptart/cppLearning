#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    int greatestnum=0;
    greatestnum=a;
    if(b>greatestnum){
        greatestnum=b;
    }
    if(c>greatestnum){
        greatestnum=c;
    }
    if(d>greatestnum){
        greatestnum=d;
    }
    return greatestnum;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
