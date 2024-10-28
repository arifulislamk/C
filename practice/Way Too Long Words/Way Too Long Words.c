// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d",&T);
    char S[100];
    for(int i =0; i<T; i++){
        scanf("%s",S);
        int len = strlen(S);
        // printf("%s %d\n", S, len);
        if(len<=10){
            printf("%s\n",S);
        }
        if(len > 10){
            printf("%c%d%c\n",S[0],len-2,S[len-1]);
        }
    }

    return 0;
}
// Example
// InputCopy
// 4
// word
// localization
// internationalization
// pneumonoultramicroscopicsilicovolcanoconiosis
// OutputCopy
// word
// l10n
// i18n
// p43s