#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int taille(char *s)
    {
        int i = 0;
        while (*s != '\0')
        {
            i++;
            s++;
        }
        return i;
    }

int rechar(char *s, char c)
    {
        int i = 0;
        while (*s != '0')
        {
            if (c == *s)
                return i;
            s++;
            i++;
        }
        return -1;
    }

int resouschaine(char *s, char *c)
    {
        int i;

        while (*s != '\0')
        {

            if (*s == *c)
            {
                while (*c != '\0' && *c == *s)
                {
                    c++;
                    s++;
                    if (*s != *c)
                    {
                        return -1;
                    }
                }
                return i;
            }
            s++;
            i++;
        }
    }

int comp(char *s1, char *s2)
    {
        int i = 0;
        while (s1[i] == s2[i])
        {

            if (s1[i] == '\0')
                return 0;
            i++;
        }
        return s1[i] - s2[i];
    }

void copy(char *ch1, char *ch2)
    {
        while (*ch1 != '\0')
        {
            *ch2 = *ch1;
            ch1++;
            ch2++;
        }
    }

void concat(char *ch1, char *ch2)
    {
        while (*ch1 != '\0')
        {
            ch1++;
        }
        while (*ch2 != '\0')
        {
            *ch1 = *ch2;
            ch1++;
            ch2++;
        }
        *ch1 = '\0';
    }

int main()
{

    char *s, *s1, *s2, *ch;
    char *ch1, *ch2;
    char c;
    int i;

    s = (char *)malloc(50 * sizeof(char));

    ch = (char *)malloc(50 * sizeof(char));

    s1 = (char *)malloc(50 * sizeof(char));

    s2 = (char *)malloc(50 * sizeof(char));

    printf("donner une chaine \n");

    scanf("%s", s);

    /*1*/
    printf("la taille de la chaine est %d\n", taille(s));

    /*2*/
    printf("donner le caractere que vous vouler chercher \n");
    scanf("%s", &c);

    i = rechar(s, c);
    if (i == -1)
        printf("le caractère que vous cherchez est introuvable \n");
    else
        printf("le caractère %c se trouve dans l'index s[%d]\n ", c, i);

    /*3*/
    printf("donner la sous chaine que vous vouler chercher \n");

    scanf("%s", ch);

    resouschaine(s, ch);
    if (i == -1)
        printf("a souschaine ne figure pas dans la chaine \n ");
    else
        printf("l'indice de la première occurrence de %s dans %s est %d \n", ch, s, i);

    /*4*/
    printf("donner une chaine s1 \n");
    scanf("%s", s1);

    printf("donner une chaine s2 \n");
    scanf("%s", s2);

    if (comp(s1, s2) > 0)
        printf(" %s est avant  %s \n", s1, s2);
    else if (comp(s1, s2) == 0)
        printf(" %s et %s sont identiques \n", s1, s2);
    else
        printf("%s vient apres %s ", s1, s2);

    /*5*/

    ch1 = (char *)malloc(50 * sizeof(char));
    ch2 = (char *)malloc(50 * sizeof(char));
    printf("donner une chaine CH1 \n");
    scanf("%s", ch1);
    copy(ch1, ch2);
    printf("copie de ch1 vers ch2 \n");
    printf("CH2:%s \n", ch2);

    /*6*/

    printf("donner une chaine 1 \n");
    scanf("%s", ch1);
    printf("donner une chaine 2 \n");
    scanf("%s", ch2);
    printf("concatenation de ch2 dans ch1 \n");
    concat(ch1, ch2);
    printf("CH1 : %s\n", ch1);

    printf("FIN");
}
