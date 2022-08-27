

 /*puts, strchr, strlen, strcpy, strncpy, strcat, strncat, fgets, strdup, getline*/

/*
функции 

char *strcat(char *s1, char *s2)
присоединяет s2 к s1, возвращает s1

char *strncat(char *s1, char *s2, int n)
присоединяет не более n символов s2 к s1, завершает строку символом '\0', 
возвращает s1

char *strсpy(char *s1, char *s2)
копирует строку s2 в строку s1, включая '\0', возвращает s1

char *strncpy(char *s1, char *s2, int n)
копирует не более n символов строки s2 в строку s1, возвращает s1;

int strcmp(char *s1, char *s2)
сравнивает s1 и s2, возвращает значение 0, если строки эквивалентны

int strncmp(char *s1, char *s2, int n)
сравнивает не более n символов строк s1 и s2, возвращает значение 0, 
если начальные n символов строк эквивалентны

int strlen(char *s)
возвращает количество символов в строке s

char *strset(char *s, char c)
заполняет строку s символами, код которых равен значению c, 
возвращает указатель на строку s

char *strnset(char *s, char c, int n)
заменяет первые n символов строки s символами, код которых равен c,
 возвращает указатель на строку s

*/

#include <stdio.h>
#include "func.h"


int strlengh(char * s) {
    int len = 0;
    while (*(s++) != '\0') len++;
    return len;
}


char * strplus(char * s1, char * s2, int l2, int k) {
    int i = 0;
    while (i < k) {
        *((s1 + i) + l2) = *(s2 + i);
        i++;
    }
    return s1;
}


char * strglue (char * s1, char * s2) {
    int len2 = strlengh(s2);
    return strplus(s1, s2, len2, len2);
}

char * strgluen(char * s1, char * s2, int n) {
    int len2 = strlengh(s2);
    if (len2 < n) n = len2;
    return strplus(s1, s2, len2, n);
}


void strptinf(char *s) {
    char *i = s;
    while ((*i) != '\0') 
        printf("%c", (*(i++)));
    printf("\n");
}

