#include <stdio.h>
#include "func.h"
#include "test.h"


void test_len(char *s, int true_len) {
    if (strlength(s) != true_len)
        printf("ERROR! s = %s; len s = %d\n; true len s = %d\n", s, strlength(s), true_len);
    else
        printf("OK!\n");
}

void test_glue(char *s1, char *s2, char *s) {
    if (!(strcomp(s, strglue(s1, s2))))
        printf("ERROR! %s + %s = %s\n", s1, s2, s);
    else
        printf("OK!\n");
    
}

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
    /*
    char s8[10] = "psb";
    char s9[10] = "psa";
    printf("%d",strcompn(s8, s9, 2));
    */


//    printf("%c", *(strsearch (s1, '1')));
   