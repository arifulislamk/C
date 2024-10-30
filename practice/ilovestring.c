// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d",&N);
    char S[51],T[51];
    for(int i=0; i<N; i++){
        scanf("%s %s",S,T);
        char result[102];
        int index = 0 ;
        int lenS = strlen(S);
        int lenT = strlen(T);
        for(int j = 0; j<lenS || j< lenT; j++){
            if(j < lenS){
                result[index] = S[j];
                index++;
            }
            if(j < lenT){
                result[index] = T[j];
                index++;
            }
        }
        result[index]= '\0' ;
        printf("%s\n",result);
}
// printf("%s \n",S);
    return 0;
}
// 2
// ipAsu ccsit
// ey gpt
// OutputCopy
// icpcAssiut
// egypt