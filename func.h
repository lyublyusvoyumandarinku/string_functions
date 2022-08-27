
#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

/**возвращает количество символов в строке s*/
int strlengh(char *s); 

/**выводит строку по указателю на ее начало*/
void strptinf(char *s);

/**присоединяет не более k символов s2 к s1 */
char * sstrplus(char *s1, char *s2, int l2, int k);

/**присоединяет s2 к s1, возвращает s1*/
char * strglue (char *s1, char *s2);

/*присоединяет не более n символов s2 к s1, возвращает s1*/
char * strgluen(char *s1, char *s2, int n);

#endif // FUNC_H_INCLUDED