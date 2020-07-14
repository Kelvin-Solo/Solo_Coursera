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
 * @brief application that performs statistical analytics on a 
 * dataset
 * this application can analyze an array of unsigned char data 
 * items and report analytics on the maximum, minimum
 * analytics on the maximum, minimum, mean, and median 
 * of the data set.
 *
 * @author Kelvin Solo
 * @date 7/14/2020
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

  
  	sort_array(test,SIZE);
	print_statistics(test,SIZE);

}

//Analytics functions.

unsigned char find_mean(unsigned char Array[],unsigned char size_of_array)
{
	unsigned char average, sum;
	
	for(int i=0; i<size_of_array;i++)
	{
		sum+=Array[i];
	}
	
	average = sum/size_of_array;
	
	return average;
}

void sort_array(unsigned char Array[], unsigned char size_of_array)
{
	char i,j;
	
	for(i=0; i<size_of_array; i++)
	{
		for(j=0;j<size_of_array;j++)
		{
			if(Array[j]<Array[i])
			{
				unsigned char temporary_storage= Array[i];
				Array[i]=Array[j];
				Array[j]=temporary_storage;
				
			}
		}
	}
	
	for(i=0;i<size_of_array;i++)
	{
		printf(" %d ", Array[i]);
	}
}

unsigned char find_median(unsigned char Array[], unsigned char size_of_array)
{
	unsigned char median;
	
	if(size_of_array%2==0)
	{
		median=((Array[(size_of_array-1)/2] + Array[size_of_array/2])/2.0);
	}
	else
	{
		median = Array[size_of_array/2];
	}
	
	return median;
}

unsigned char find_maximum(unsigned char Array[], unsigned char size_of_array)
{
	unsigned char max_value;
	max_value=Array[0];
	
	for(int i=0;i<size_of_array;i++)
	{
		if(max_value<Array[i])
		max_value=Array[i];
		
	}
	return max_value;
}

unsigned char find_minimum(unsigned char Array[], unsigned char size_of_array)
{
	unsigned char min_value;
	min_value=Array[0];
	
	for(int i=1;i<size_of_array;i++)
	{
		if(min_value>Array[i])
		min_value=Array[i];
	}
	return min_value;
}

void print_statistics(unsigned char Array[], unsigned char size_of_array)
{
	
	unsigned char MEAN, MEDIAN, MAXIMUM, MINIMUM;
	
	MEAN=find_mean(Array,size_of_array);
	MEDIAN=find_median(Array,size_of_array);
	MAXIMUM=find_maximum(Array,size_of_array);
	MINIMUM=find_minimum(Array,size_of_array);
	
	printf("\nmean is %d", MEAN);
	printf("\nmedian is %d", MEDIAN);
	printf("\nmaximum is %d", MAXIMUM);
	printf("\nminimum is %d\n",MINIMUM);
}
/* End */
