// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char S[1000001];
    scanf("%s",S);
    // printf("%s", S);
    
    int len = strlen(S);
    int sum = 0;
    for(int i=0; i<len; i++){
        // printf("%d ", S[i] - 48);
        int convert = S[i] - 48 ;
        sum = sum + convert ;
    }
    printf("%d",sum);
    return 0;
}
// InputCopy
// 351
// OutputCopy
// 9