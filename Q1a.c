#include <stdio.h>
int main()
{ 
    int a;
    printf("ENTER A NO TO FIND WHETHER IT'S EVEN OR ODD : ");
    scanf("%f", &a);
    if (a % 2 == 0)
       printf("NO IS EVEN.");
    else printf("NO IS ODD.");
    return 0;
}
