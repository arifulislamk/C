// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char X[21], Y[21];
    scanf("%s\n%s",X,Y);
    // printf("%s %s", X,Y);
    
    if(strcmp(X,Y) < 0){
        printf("%s\n",X);
    }else if(strcmp(X,Y) == 0){
        printf("%s\n",X);
    }else{
        printf("%s",Y);
    }
    
    
    return 0;
}
// InputCopy
// acm
// acpc
// OutputCopy
// acm