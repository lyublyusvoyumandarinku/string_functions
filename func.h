
#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

/**возвращает количество символов в строке s*/
int strlength(char *s); 

/**выводит строку по указателю на ее начало*/
void strptinf(char *s);


/**присоединяет не более k символов s2 к s1 */
char * sstrplus(char *s1, char *s2, int l2, int k);

/**присоединяет s2 к s1, возвращает s1*/
char * strglue (char *s1, char *s2);

/*присоединяет не более n символов s2 к s1, возвращает s1*/
char * strgluen(char *s1, char *s2, int n);



/*заменяет все символы строки s на символ с*/
char * strfill(char *s, char c); 

/*заменяет не более n символов строки s на символ с*/
char * strfilln(char *s, char c, int n); 


/*заменяет все символы строки s1 на символы строки s2*/
char * strcopy(char * s1, char * s2);

/*заменяет не более n символов строки s1 на символы строки s2*/
char * strcopyn(char * s1, char * s2, int n);


/*сравнивает всю строку s1 со строкой s2*/
int strcomp(char * s1, char * s2);
/*сравнивает не более первых n символов строки s1 с символами строки s2*/
int strcompn(char * s1, char * s2, int n);

#endif // FUNC_H_INCLUDED