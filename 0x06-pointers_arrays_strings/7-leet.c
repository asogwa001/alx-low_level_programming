#include "main.h"
/**
* leet - function that encode a string
*@str:string that will be encoded
*Return:returns encoded string
*/

/**
char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
			 str[index1] - 32 == leet[index2])
				str[index1] = index2 + '0';
		}
	}
	return (str);
}
*/
char *leet(char *str){
	int i = 0;
	while(*(str + i))
	{
		if (*(str + i) == 'a' || *(str + i) == 'A')
		{
			*(str + i) = '4'; 

		}
		else if (*(str + i) == 'e' || *(str + i) == 'E')
		{
			*(str + i) = '3';

		}
		else if (*(str + i) == 'o' || *(str + i) == 'O')
		{
			*(str + i) = '0';

		}
		else if (*(str + i) == 't' || *(str + i) == 'T')
		{
			*(str + i) = '7';

		}
		else if (*(str + i) == 'l' || *(str + i) == 'L')
		{
			*(str + i) = '1';

		}
		i++;

	}
	return str;
	
}
