#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_of_people;
    printf("enter the number of people:");
    scanf("%d",& num_of_people);
    int age[num_of_people];
    for(int i=0; i<num_of_people; i++){
        printf("enter age of people:");
        scanf("%d", age[i]);
    }
    printf("Hello world!\n");
    return 0;
}
