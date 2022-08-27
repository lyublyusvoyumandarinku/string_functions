

 /*puts, strchr, //strlen, //strcpy, //strncpy, //strcat, //strncat, //strset, //strsetn, fgets, strdup, getline*/

/*
функции 


//int strcmp(char *s1, char *s2)
сравнивает s1 и s2, возвращает значение 0, если строки эквивалентны

//int strncmp(char *s1, char *s2, int n)
сравнивает не более n символов строк s1 и s2, возвращает значение 0, 
если начальные n символов строк эквивалентны
*/

#include <stdio.h>
#include "func.h"


int strlength(char * s) {
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
    int len2 = strlength(s2);
    return strplus(s1, s2, len2, len2);
}
char * strgluen(char * s1, char * s2, int n) {
    int len2 = strlength(s2);
    if (len2 < n) n = len2;
    return strplus(s1, s2, len2, n);
}


void strptinf(char *s) {
    char *i = s;
    while ((*i) != '\0') 
        printf("%c", (*(i++)));
    printf("\n");
}

char * strfill(char *s, char c) {
    char *i = s;
    while ((*i) != '\0') 
        *(i++) = c;
    return s;    
}
char * strfilln(char *s, char c, int n) {
    char *i = s;
    int len = strlength(s);
    if (len < n) n = len; 
    while (((*i) != '\0') && ((i-s) < n)) 
        *(i++) = c;
    return s;
}



char * strcopy(char * s1, char * s2){
    if (strlength(s1) < strlength(s2)) 
        return NULL;
    
    char *i = s2;
    while ((*i) != '\0') 
        (*(i++)) = (*(s2++)) ;
    return s1;

}
char * strcopyn(char * s1, char * s2, int n){
    if (strlength(s1) < strlength(s2)) 
        return NULL;
    
    char *i = s1;
    while ( ((*i) != '\0') && ((i-s1) < n) ) 
        (*(i++)) = (*(s2++)) ;
    return s1;

}


int strcomp(char * s1, char * s2){
    int l1 = strlength(s1);
    int l2 = strlength(s2);
    
    if (l1 != l2)
        return (-1 + 2 * (l1 > l2));
    
        
    char  *i = s1;
    while  ((*i) != '\0'){
        if ((*i) != (*s2))
            return ( -1 + 2 * ( (*i) > (*s2) )  );
        i++; s2++;
    }  
    return 0;
}

int strcompn(char * s1, char * s2, int n){
    int l1 = strlength(s1);
    int l2 = strlength(s2);
    
    if (l1 != l2)
        return (-1 + 2 * (l1 > l2));
    
        
    char  *i = s1;
    while ( ((*i) != '\0') && ((i-s1) < n) ) 
        if ((*(i++)) != (*(s2++)))
            return ( -1 + 2 * ( (*i) > (*s2) )  );  
    return 0;
}