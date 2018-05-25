/*
** EPITECH PROJECT, 2017
** concat_params
** File description:
** 
*/

char *concat_params(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *ret = "\n";
	char *result;
	result = malloc(sizeof(char) * (ac + 1));
	
	while(i < ac) {//chaque arg
		while(av[i][j] != '\0') {//char carac de chaque arg
			result[k] = av[i][j];
			k = k + 1;
			j = j + 1;
		}
		j = 0;
		i = i + 1;
		
	}
	result[k] = '\0';
	return(result);
}

int main(int ac, char **av)
{
	my_putstr(strdup(concat_params(ac, av)));
	return(1);
}
