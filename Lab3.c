#include <stdio.h>
#include <math.h>
#include <string.h>

#encoding word
void coder(char s[], int k)
{
	int l = strlen(s), m = 0;
	char ch[l], res[l];
	for (int i = 0; i < l; i++)
	{
		ch[i] = '0';
	};
	int i = 0, j = 0;
	while (m < l)
	{
		if (ch[i] == '0')
		{
			j++;
		}
		if (j != 0 && j % k == 0)
		{
			ch[i] = '1';
			res[m] = s[i];
			printf("%c", s[i]);
			m++;
			j = 0;
		}
		i++;
		if (i>=l)
			i = 0;
	}
};
int main()
{
	char str[] = "absdeu";
	int key = 3;
	coder(str, key);
    int h = 5;
    int *j = &h;
	return 0;
};
