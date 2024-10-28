// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
   char S[1001];
   scanf("%s",S);
   
   int len = strlen(S);
   int find = 1 ;
   for(int i = 0, j=len-1 ; i<len; i++,j--){
    //   printf("%d %d",i,j);
      if(S[i]!=S[j]){
        //   printf("YES\n");
        find = 0;
      }
    //   printf("\n");
   }
   if(find){
       printf("YES\n");
   }else{
       printf("NO\n");
   }
    return 0;
}
// Examples
// InputCopy
// abba
// OutputCopy
// YES
// InputCopy
// icpcassiut
// OutputCopy
// NO