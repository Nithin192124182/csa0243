#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,rem,reverse=0;
    printf("Enter a number for find reverse\n");
    scanf("%d",&num);
    printf("You entered %d\n",num);
    for(;num!=0; num=num/10){
        rem=num%10;
        reverse=reverse*10+rem;
    }
    printf("Reverse of the given number %d",reverse);
    
    return 0;
}
