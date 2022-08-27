
#include <stdio.h>
#include <string.h>
#include "func.h"

int main() {
    char s1[10] = "123";
    char s2[10] = "456";

    printf("!!!\n");
    //printf("len s1 = %d\n", strlength(s1));
    
    //strptinf(strglue(s1, s2));

    /*
    char s3[10] = "qwe";
    char s4[10] = "rty";
    strptinf(strgluen(s3, s4, 2));
    */

    /*
    char s5[10] = "vvvvvvv";
    char c = 'p';
    strptinf(strfilln(s5, c, 3));
    */

    /*
    char s6[10] = "asdf";
    char s7[10] = "yui";
    strptinf(strcopyn(s6, s7, 2));
    */

    char s8[10] = "psb";
    char s9[10] = "psa";
    printf("%d",strcompn(s8, s9, 2));

}