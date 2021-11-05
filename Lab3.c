#include <stdio.h>
#include <math.h>
#include <string.h>

void encoder(char word[], int key)
{
	int wordLenth = strlen(word), numOfEncodedChars = 0;
	char changer[wordLenth], result[wordLenth];
	for (int i = 0; i < wordLenth; i++)
	{
		changer[i] = '0';
	};
	int i = 0, j = 0;
	while (numOfEncodedChars < wordLenth)
	{
		if (changer[i] == '0')
		{
			j++;
		}
		if (j != 0 && j % key == 0)
		{
			changer[i] = '1';
			result[numOfEncodedChars] = word[i];
			printf("%c", word[i]);
			numOfEncodedChars++;
			j = 0;
		}
		i++;
		if (i>=wordLenth)
			i = 0;
	}
};
int main()
{
	char str[] = "absdeu";
	int key = 3;
	encoder(str, key);
    int h = 5;
    int *j = &h;
	return 0;
};
