/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** 
*/

char *my_strdup(char const *src)
{
	int i;
	char *dup;
	i = strlen(src);
	dup = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i] != '\0') {
		dup[i] = src[i];
		i = i + 1;
	}
}
