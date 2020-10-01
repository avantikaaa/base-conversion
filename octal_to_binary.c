//FILE OWNER: SRIPRIYA
#include<stdio.h>
#include<math.h>

long binary(int octal)
{
	int decimal = 0, i = 0;
	long binary = 0;
	while(octal !=0 ){
		decimal = decimal + (octal % 10) * pow(8, i);
		i++;
		octal = octal / 10;
	}
	i = 1;
	while(decimal != 0){
		binary+=(decimal%2)*i;
		decimal=decimal/2;
		i=i*10;
	}
	printf(" binary equivalent of octal number = %d ",binary);
}

int main()
{
	int bin,octal;
	printf(" enter an octal number : ");
	scanf("%d",&octal);
	binary(octal);
	return 0;
}
