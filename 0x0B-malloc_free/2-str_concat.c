#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - function that concacenate two strings
* @s1: string 1
* @s2: string 2
* Return: always zero
*/
char *str_concat(char *s1, char *s2)
{
int i, j, len1, len2, len;
char *finalresult;
len1 = len2 = 0;
if (s1 != NULL)
{
i = 0;
while (s1[i++] != '\0')
len1++;
}
if (s2 != NULL)
{
i = 0;
while (s2[i++] != '\0')
len2++;
}
len = len1 + len2;
finalresult = (char *)malloc(sizeof(char) * (len + 1));
if (finalresult == NULL)
return (NULL);
for (i = 0; i < len1; i++)
finalresult[i] = s1[i];
for (j = 0; j < len2; j++, i++)
finalresult[i] = s2[j];
finalresult[len] = '\0';
return (finalresult);
}
