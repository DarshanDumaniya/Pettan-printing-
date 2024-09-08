/*My name is Darshan Dumaniya 
 creative date 8/9/2024
 write a code in clanguage 
*/
#include<stdio.h>

int main()
{   int n;
    printf("enter number\n");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");

        }
        printf("\n");

    }

    printf ("\n\nThank you for visit my code");
}