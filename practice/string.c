// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
   char S1[25];
   char S2[11];
   scanf("%s\n%s",S1,S2);
   
   
   int len1= strlen(S1), len2 = strlen(S2);
   printf("%d %d\n",len1,len2);
   
   char S11[11];
   strcpy(S11,S1);
   
    //   strcat(S1,S2);
    for(int i=0,j=len1; i<len2; i++,j++){
    S1[j] = S2[i];
    }
    S1[len1+len2]= '\0';
   printf("%s\n",S1);
       char t = S11[0] ;
       S11[0] = S2[0] ;
       S2[0] = t;
       printf("%s %s\n",S11, S2);
    return 0;
}
// InputCopy
// abcd
// ef
// OutputCopy
// 4 2
// abcdef
// ebcd af