//INPUT  : 2 integers, 'a' and 'base'.
//OUTPUT : Hexadecimal form of 'a' for the base 'base'
#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int count=0;								//Global variable
char hex(int a, int base, char *output)			//Recursion: Stores the output in the reverse order
{
	if(a>0)
	{
		if(a%base<10)
			*(output+count) = '0'+a%base;	//using ASCII value to store the character
		else
			*(output+count) = 'a'+a%base-10;	//using ASCII value to store the character
		count++;
		return hex(a/base, base, output);
	}
}


int decimal(char a[], int b, int index, int out)
{
	if(index==strlen(a))
	{
		return out;
	}
	int tmp = a[index];
	if(tmp<58)
	{
		tmp -= 48;
	}
	else if(tmp<91)
	{
		tmp -= 55;
	}
	else
	{
		tmp -= 87;
	}
	out = out*b;
	out += tmp;
	return decimal(a, b, index+1, out);
}


int main()
{
	int  b, base;
	char inp[20];
	printf("number: ");
	scanf("%s", inp);					//INPUT


	printf("base of the number: ");
	scanf("%d", &b);
	printf("enter base to be converted: ");
	scanf("%d", &base);
	
	int a = decimal(inp, b, 0, 0);

	
	char *output;
	output = (char*)malloc(31*sizeof(char));	//Initialisation of the pointer
	hex(a, base, output);				//Calling the function
	for (int j=count; j>0; j--)				//OUTPUT
		printf("%c", *(output+j-1));
	printf("\n");
	free(output);						//De-allocation


	return 0;
}
