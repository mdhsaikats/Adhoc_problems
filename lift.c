#include<stdio.h>
int main()
{
    int t, you, lift;
    int fix_time=19;
    scanf("%d", &t);  
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &you, &lift);  
        int first_lift = (lift - you)*4; 
        int x = you*4;
        int m = x + first_lift;  
        int res = m + fix_time;
        printf("%d\n", res);      
    }
    return 0;
}
