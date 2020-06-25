#include <stdio.h>
#include <stdlib.h>

#define max 10

typedef int ET;

void swapElement(ET *l, ET *r)
{
	ET temp = *l;
	*l = *r;
	*r = temp;
}

void permute(ET *qwe, int n)
{
	int i=0,j=0;

	for(i=0;i<n;i++)
	{
		qwe[i]=i;
	}

	for(i=n-1;i>0;i--)
	{
		j = rand()&(i+1);
		swapElement(&qwe[i],&qwe[j]);
	}
}

void insertion(ET *qwe, int n)
{
	int i,j;
	ET key;

	for(i=1;i<n;i++)
	{
		key = qwe[i];
		j = i-1;

		while(j>=0 && qwe[j] < key)
		{
			qwe[j+1] = qwe[j];
			j = j-1;
		}
		qwe[j+1] = key;
	}
}

void selection(ET *qwe, int n)
{
	int i,j;
	int min,temp;

	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(qwe[j] < qwe[min]) min = j;
		}

		temp = qwe[i];
		qwe[i] = qwe[min];
		qwe[min] = temp;
	}
}

void bubble(ET *qwe, int n)
{
	int i=0, j=0, temp;

	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(qwe[j] < qwe[j-1])
			{
				temp = qwe[j-1];
				qwe[j-1] = qwe[j];
				qwe[j] = temp;
			}
		}
	}
}

void shell(ET *qwe, int n)
{
	int i,j,increment;
	ET temp;

	for(increment = n/2;increment>0;increment /=2)
	{
		printf("increament %d\n",increment);
		for (i=increment;i<n;i++)
		{
			temp = qwe[i];
			printf("temp %d\n",temp);
			for(j=i;j>=increment;j-=increment)
			{
				if(temp < qwe[j-increment]) 
				{
					qwe[j] = qwe[j-increment];
					printf("\t");
					print(qwe,n);
				}
				else break;
			}
			qwe[j] = temp;
		}
		print(qwe,n);
	}
}

void print(ET *qwe, int n)
{
	int i=0;

	for(i=0;i<n;i++)
	{
		printf("%d ",qwe[i]);
	}
	printf("\n");
}

void merge(ET *arr ,int p, int q, int r)
{
	int i,j,k;
	int n1 = q-p+1, n2 = r-q;

	ET qwe[n1], asd[n2];

	for(i=0 ; i<n1 ; i++)
		qwe[i] = arr[p+i];
	for(j=0 ; j<n2 ; j++)
		asd[j] = arr[q+j+1];

	i=j=0;

	for(k=p; k<=r; k++)
	{
		if(j>=n2 || (i<n1 && qwe[i] <= asd[j]))
			arr[k] = qwe[i++];
		else arr[k] = asd[j++];
	}
}

void mergeSort(ET *qwe, int p, int r)
{
	if(p<r)
	{
		int q = (p+r)/2;
		mergeSort(qwe,p,q);
		mergeSort(qwe,q+1,r);
		merge(qwe,p,q,r);
	}
}


int main(int argc, char const *argv[])
{
	ET qwe[max];

	permute(qwe,max);
	printf("Original Sequence\n");
	print(qwe,max);
	insertion(qwe,max);
	printf("Sorted with insertion sort\n");
	print(qwe,max);
	printf("\n\n");
	
	permute(qwe,max);
	printf("Original Sequence\n");
	print(qwe,max);
	selection(qwe,max);
	printf("Sorted with selection sort\n");
	print(qwe,max);
	printf("\n\n");

	permute(qwe,max);
	printf("Original Sequence\n");
	print(qwe,max);
	bubble(qwe,max);
	printf("Sorted with bubble sort\n");
	print(qwe,max);
	printf("\n\n");
	
	permute(qwe,max);
	printf("Original Sequence\n");
	print(qwe,max);
	shell(qwe,max);
	printf("Sorted with shell sort\n");
	print(qwe,max);
	printf("\n\n");


	permute(qwe,max);
	printf("Original Sequence\n");
	print(qwe,max);
	mergeSort(qwe,0,max-1);
	printf("Sorted with merge sort\n");
	print(qwe,max);

	return 0;
}
































































//Author : Eko Simanjuntak - 11415009
