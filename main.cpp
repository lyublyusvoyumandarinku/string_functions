
#include <stdio.h>
#include "func.h"

int main() {
    char s1[10] = "123";
    char s2[10] = "456";

    printf("len s1 = %d\n", strlengh(s1));
    printf("len s2 = %d\n", strlengh(s2));

    
    strptinf(strglue(s1, s2));

    char s3[10] = "123";
    char s4[10] = "456";
    strptinf(strgluen(s3, s4, 1));
    /*
    // '''''''
    char s1[10] = "123";
    char s2[10] = "456";
    printf("%s\n", strgluen(s1, s2, 1));
*/
}