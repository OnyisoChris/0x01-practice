#include <stdio.h>
#define FALSE -1
#define NULL ((void *)0)
#define TRUE 1

int main()
{
        if(NULL)
                printf("NULL\n");
        else if(FALSE)
                printf("TRUE\n");
        else
                printf("FALSE\n");
        return (0);
} 
