#include <stdio.h>
int main() {
    int rows, i, j,n;
    printf("Enter the number of rows: ");
    scanf("%d", &rows); 
    for (i = 2; i <=rows ; i++) {
        for (j = 2; j <= i; j++) {
            {
                if(i>=j)
            
            printf("%d%d", i,j);
            else
            printf("");
        }
        }
        printf("\n");
    

    }

    return 0;
}
