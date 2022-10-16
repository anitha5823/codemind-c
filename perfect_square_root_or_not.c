#include<stdio.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int sq1;
    float sq;
    scanf("%d",&num);
  
    sq=sqrt((double)num);
    sq1=sq;
 
    if(sq1==sq)
        printf("True");
    else
        printf("False");
      
    return 0;
}