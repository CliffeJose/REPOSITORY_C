#include <stdio.h>
void toh(int n,char sou,char des,char aux)
{
    if(n==1){
        printf("\nMove the disk from %c to %c",sou,des);
        return;
    }
    toh(n-1,sou,aux,des);
    printf("\nMove the disk from %c to %c",sou,des);
    toh(n-1,aux,des,sou);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    toh(n,'A','B','C');
    return 0;
}