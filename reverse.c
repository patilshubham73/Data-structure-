#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A[]={1,2,3,4,5,6,8,6,9,6};
	int B[10];
	int i,j;
	int size=sizeof(A)/sizeof(A[0]);

	printf("%d\n",size);
	//for copy A to B array in reverse order
	for(i=size-1,j=0;i>=0;i--,j++)
	{
			B[i]=A[i];

	}
	//and then reverse array in copy A[] array
	for(i=0;i<size;i++)
	{
			A[i]=B[i];

	}
	//print reverse array
	for(i=0;i<size;i++)
	{
		printf("%d ",A[i]);

	}


	return 0;
}
