#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int MAX_LEN = 100;

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];

    scanf("%c\n", &ch);
    scanf("%s\n", s);
    scanf("%[^\n]%*c", sen);

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);

    return 0;
}

