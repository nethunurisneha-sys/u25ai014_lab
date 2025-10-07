#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,per,s;
    printf("enter marks in first sub");
    scanf("%f",&s1);
    printf("enter marks in second sub");
    scanf("%f",&s2);
    printf("enter the marks in third sub");
    scanf("%f",&s3);
    printf("enter the marks in fourth sub");
    scanf("%f",&s4);
    printf("enter the marks in fifth sub");
    scanf("%f",&s5);
    printf("enter the total marks ");
    scanf("%f",&s);
    per=((s1+s2+s3+s4+s5)*100)/s;
    printf("%f",per);

}


