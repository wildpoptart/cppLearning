#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int len=0;
    scanf("%d",&len);
    int array1[len] ={0};

    for(int i=0;i<len;i++){
        scanf("%d",&array1[i]);
    }

    for(int i=len-1;i>=0;i--){
        printf("%d ",array1[i]);
    }

    return 0;
}
