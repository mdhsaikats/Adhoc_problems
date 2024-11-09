#include<stdio.h>
int main()
{
    int num,rev=0,original,last_digit;
    scanf("%d",&num);
    if(num<0)
    {
        printf("negetive not a palindrom");
        return 0;
    }
    original = num;
while (num>0)
{
    last_digit = num%10;
    rev=rev*10 + last_digit;
    num /=10;
}
if (rev==original)
{
    printf("Yes");
}else{
    printf("No");
}
return 0;
}