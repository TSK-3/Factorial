#include<Stdio.h>

int main() {
    int n,i,fact=1;
    printf("Enter the value of n  :");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        fact = fact*i;
        printf("Factorial = %d",fact);

    }
    
}   