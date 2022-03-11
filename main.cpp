#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE* sampleFile = fopen("samples","r");	
	if (!sampleFile)
	{
		perror("fail");
		exit(EXIT_FAILURE);
	}

	unsigned char buffer[14];

	fread(buffer, sizeof(buffer), 2, sampleFile);

	float samp  = (buffer[0]-127.5)/128;
	float samp2 = (buffer[1]-127.5)/128;
	printf("Sample I %.5f Q %.5f", samp, samp2);

	perror("success");



	return 1;
}
