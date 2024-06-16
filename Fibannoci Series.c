#include <stdio.h>
int fab(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fab(n-1)+fab(n-2));
    return 0;
}
int fab(int n);
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        printf("%d",fab(i));
    }
    return 0;
}