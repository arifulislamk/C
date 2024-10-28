#include<stdio.h>
int main()
{   int m;
    scanf("%d",&m);
    for(int j=1; j<=m ; j++){
        for(int i=1; i<=10; i++){
            printf("%d * %d = %d\n",j,i,j * i);
        }
    }
    return 0;
}1