#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    printf("enter your list's length:");
    scanf("%d",&s);
    int x[s];
    printf("enter your list:\n");
    int i;
    int reverse[s];
    for (i=0;x[s]!=0;i++){scanf("%d",&x[i]);}
    for (i=0;x[i]!=0;i++){reverse[i]=x[s-1-i];}
    printf("the sorted list is:\t");
    for (i=0;x[i]!=0;i++){printf("%d\t",reverse[i]);}
    return 0;
}
