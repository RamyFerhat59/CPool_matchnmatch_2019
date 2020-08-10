/*
** EPITECH PROJECT, 2019
** match.c
** File description:
** match
*/

void parse (char const *s1, const *s2, int *index1, int *index2)
{
    if (s2[index2] == '*') {
        while (s2[index2] == '*')
            index2++;
        char cpy = s2[index2];
        while (s1[index1] != cpy) {
            if (s1[index1] == '\0')
                return 0;
            index1++;
        }
    }
    
}

int match(char const *s1, char const *s2)
{
    int index1 = 0;
    int index2 = 0;

    for (int j = 0; j < my_strlen(s1) + 1; j++) {
        parse(s1, s2, index1, index2);
        if (s1[index1] == s2[index2]) {
            if (s1[index1] == '\0' && s2[index2] == '\0')
                return 1;
            index1++;
            index2++;
        }
        else
            return 0;
    }
    return 0;
}
