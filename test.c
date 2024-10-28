#include <stdio.h>

int main() {
    char str[50];
    // scanf("%s",str);
    // scanf("%[^\n]s",str);
    // gets(str);  // This reads until newline character is encountered.
    
    fgets(str,sizeof(str),stdin) ;// This reads until newline character is encountered.
    // str[strcspn(str, "\n")] = 0;  // Remove newline character from the string.

    // printf("%s",str);
    // fputs(str,stdout);
    puts(str);
    
    return 0;
}