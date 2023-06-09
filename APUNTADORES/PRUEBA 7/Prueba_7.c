#include <stdio.h>
void main()
{
char uno[20], dos[20];
printf ("\nDame una cadena:");
gets(uno);
copia(uno, dos);
printf ("\nLa copia de %s\n es %s\n", uno, dos);
}
copia (char *s)
{
 while (*s) *p++ = *s++;
 *p = '\0';
} 