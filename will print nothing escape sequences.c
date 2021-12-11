#include<stdio.h>
int main()
{

	int i = 0;
	printf("Hello"); 
	char s[4] = {'\b', '\r', '\t', '\n'};

	for(i = 0;i<4;i++)
		printf("%c", s[i]);	
	printf("Hello");
	return 0;

}
