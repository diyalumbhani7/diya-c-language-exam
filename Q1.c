#include<stdio.h>
int main()
{
    char i;
    printf("Enter any alphabet:");
    scanf("%c",&i);

    switch(i)
    {
    a:
    printf("It is vowel");
    break;
    A:
    printf("It is vowel");
    break;
    E:
    printf("It is vowel");
    break;
    I:
    printf("It is vowel");
    break;
    O:
    printf("It is vowel");
    break;
    U:
    printf("It is vowel");
    break;
    e:
    printf("It is vowel");
break;
    i:
    printf("It is vowel");
    break;
    o:
printf("It is vowel");
    break;
    u:

    printf("It is vowel ");
    break;
    
    
    default:

    if(i>='a' && i<='z' && i>='A' && i<='Z')
    {
        printf("It is consonant ");
    }
    break;
}

    return 0;
}