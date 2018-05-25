/*
** EPITECH PROJECT, 2017
** my_str_to_word_array
** File description:
** 
*/

int     is_charac(char c)
{
	if (c >= '0'&& c <= '9'|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
	        return(1);
	}
	return(0);
}
int	coumpt(char const *str)
{
	int	a = 0;
	int	b = 0;
	while (str[a] != '\0'){
		if (is_charac(str[a]) == 1 && is_charac(str[a + 1]) != 1){
			b = b + 1;
		}
		a = a + 1;
	}
	return (b);
}

int len_of_word(char *str, int i)
{
        while (str[i] != '\0') {
                if (is_charac(str[i]) != 1)
                        return (i);
                i++;
        }
        return (i);
}


char **my_str_to_word_array(char const *str)
{
	int	y = coumpt(str);
	char	**result = malloc(10000);
	int	a = 0;
	int	b = 0;
	int	c = 0;

	
	while (b < y){
		c = 0;
		result[b] = malloc(100000);
		while (str[a] != '\0' && is_charac(str[a]) != 0) {
			result[b][c] = str[a];
			c = c + 1;
			a = a + 1;
		}
		result[b][c] = '\n';
		result[b][c + 1] = '\0';
		a = a + 1;
		b = b + 1;
	}
	free(result);
	return (result);
}

int main()
{
	char zob = "oh jai un zob oui un zob";
	my_str_to_word_array(zob);
}
