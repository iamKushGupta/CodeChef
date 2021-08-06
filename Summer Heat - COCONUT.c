#include <stdio.h>
#include <math.h>

int main () {
    int t, a, b, x, y;
    scanf("%d", &t);
    
    for(int i= 0; i<t; i++ ) {
        scanf ("%d %d %d %d", &a, &b, &x, &y);
        printf("%d\n", (x/a) + (y/b));
    }
    return 0;
}
