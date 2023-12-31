#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    float x;
    printf("enter how long is your list:");
    scanf("%d",&s);
    float numbers[s];
    printf("enter your list:");
    int i;
    for(i=0;i<s;i++){scanf("%f",&numbers[i]);}
    for(i=0;i<s;i++){printf("%.2f\n",numbers[i]);}
    printf("enter a number:");
    scanf("%f",&x);
    int j;
    for (i=0;i<s;i++){for(j=0;j<s;j++){if(numbers[j]==x){numbers[j]=0;}}}
    printf("the new list:\n");
    for(j=0;j<s;j++) {printf("%.2f\t",numbers[j]);}
    return 0;
}
