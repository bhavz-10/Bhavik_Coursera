/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Basic Statistics on elements of an array.
 *
 * This code contains basic operations like mean,median,mode,sorting and all
 * of these are performed on the elements of an array.
 *
 * @author Bhavik Kalpesh
 * @date 10/5/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char median;
  unsigned char mean;
  unsigned char minimum;
  unsigned char maximum;
  /* Statistics and Printing Functions Go Here */
  printf("\n\nArray before sorting:\n");
  print_array(test,SIZE);
  sort_array(test,SIZE);
  mean = find_mean(test,SIZE);
  median = find_median(test,SIZE);
  minimum = find_minimum(test,SIZE);
  maximum = find_maximum(test,SIZE);
                             
  print_statistics(mean,median,minimum,maximum);
  printf("\n\nArray after sorting: (Ascending order)\n");
  print_array(test,SIZE);
  printf("\n\n");
}

unsigned char find_maximum(unsigned char *array,int size)
{
        unsigned char max;
        max=*array;
        array++;
        size--;
        while(size>0)
        {
                if(max<*array)
                {
                        max=*array;
                }
                array++;
                size--;
        }
        return max;
}


unsigned char find_minimum(unsigned char *array,int size)
{
	unsigned char min;
	min=*array;
	array++;
	size--;
	while(size>0)
	{
		if(min>*array)
		{
			min=*array;
		}
		array++;
		size--;
	}
	return min;
}
unsigned char find_mean(unsigned char *array,int size)
{
	int sum=0;
	while(size>0)
	{
		sum+=*array;
		array++;
		size--;
	}
	return (sum/40);
}
unsigned char find_median(unsigned char *array,int size)
{
	if(size%2==0)
	{
		size=size/2;
		return ((array[size-1]+array[size])/2);
	}
}
void sort_array(unsigned char *array,int size)
{
	int outerLoop,innerLoop;
	unsigned char tempValue=0;

	for(outerLoop=0;outerLoop<size-1;outerLoop++)
		for(innerLoop=(outerLoop+1);innerLoop<size;innerLoop++)
			if(array[outerLoop]>array[innerLoop])
			{
				tempValue=array[outerLoop];
				array[outerLoop]=array[innerLoop];
				array[innerLoop]=tempValue;
			}


}

void print_array(unsigned char *array,int size)
{
	int loop=0;
	while(loop<size)
	{
		printf("%u ",array[loop]);
		loop++;
	}
}
void print_statistics(unsigned char mean,unsigned char median,unsigned char minimum,unsigned char maximum)
{
	printf("\n\nMean    = %u",mean);
	printf("\nMedian  = %u",median);
	printf("\nMinimum = %u",minimum);
	printf("\nMaximum = %u",maximum);
}
/* Add other Implementation File Code Here */
