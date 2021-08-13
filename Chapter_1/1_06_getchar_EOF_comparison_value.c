#include <stdio.h>

int main(){
    /* Verify getchar() != EOF is 0 or 1 */
    printf("Feed a value to getchar()\n");
    printf("value of expression: %d", getchar() != EOF);
    return 0;
}

/* Expression verification

The expression getchar() != EOF is equal with 1

on Windows the EOF char is accessible with CTRL+Z
on Unix like systems the EOF char is accessible with CTRL+D.
*/
