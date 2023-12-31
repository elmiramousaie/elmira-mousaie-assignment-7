#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("how many lettters?");
   scanf("%d",&n);
    while(n>100000){
      break;
    }
    char word[100000];
    printf("enter the word:");
    scanf("%s",word);
    while (getchar()!= '\n')
    printf("%s\n",word);
    char x[n];
    printf("enter the answer:");
    scanf("%s",x);
    int ln= strlen(word)-1;
    int sum=0;
    for (int i=ln; i>=0; i--){
        if(word[i]!=x[i]){
            sum++;
        }
    }
     printf("%d",sum);
    return 0;
}
