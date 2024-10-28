// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
   char S[100001];
//   scanf("%[^\n]",S);
   fgets(S,sizeof(S),stdin);
//   printf("%s",S);
    int len = strlen(S);
    for(int i=0; i<len; i++){
        if(S[i] == ','){
            S[i]= ' ';
        }
        if(S[i] >= 'A' && S[i] <= 'Z'){
            S[i]= S[i] + 32 ;
        }
        else if(S[i] >= 'a' && S[i] <= 'z'){
            S[i]= S[i] - 32 ;
        }
    }
      printf("%s",S);
   
    return 0;
}
// Example
// InputCopy
// happy,NewYear,enjoy
// OutputCopy
// HAPPY nEWyEAR ENJOY

