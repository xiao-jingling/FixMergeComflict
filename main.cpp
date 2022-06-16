#include <stdio.h>
#include <string.h>
 
int main()
{
	char data[100] = "my branch name is A";
	int length = strlen(data);
	
	for(int i = 0; i < length; i++)
	{
		printf("%c", data[i]);
	}
	
	printf("branch AAA\n");
	
	return 0;
}

