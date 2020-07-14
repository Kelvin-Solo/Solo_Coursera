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
 * @file stats.h
 * @brief: this files contains function declarations that analyse 
 * an array
 * The functions are used to find mean, median, maximum, minimum 
 *and sort the array in descending order.
 * @author Kelvin Solo
 * @date 7/14/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* find_mean is used to find the mean of array elements. */ 

/**
 * @brief: this functions uses a for loop to add all array element
 * and then divide the sum by size of array.
 * 
 * @return: this functions returns the mean of elements.
 */
 unsigned char find_mean(unsigned char Array[],unsigned char size_of_array);

/* sort_array arranges the array elements in descending order. */ 

/**
 * @brief This functions uses 2 for loops to compare size of  
 * elements then reorders the elements according to size
 * from largest to smallest
 *
 * @return This functions returns the sorted array.
 */
 void sort_array(unsigned char Array[], unsigned char size_of_array);
 
 /* find_median finds which element is in the middle. */
 /**
 * @brief This functions checks if array has an even or odd no of 
 * elements. Depending on this it performs a division of the 
 * elements at center by 2 to find median.
 *
 * @return This functions returns median of array.
 */
 unsigned char find_median(unsigned char Array[], unsigned char size_of_array);
 
/* find_maximum finds largest element in the array. */
 /**
 * @brief This functions uses for loop to check size of element 
 * The largest element is assigned the maximum value.
 *
 * @return This functions returns maximum element of array.
 */
 
 unsigned char find_maximum(unsigned char Array[], unsigned char size_of_array);

/* find_minimum finds smallest element in the array. */
 /**
 * @brief This functions uses for loop to check size of element 
 * The smallest element is assigned the minimum value.
 *
 * @return This functions returns minimum element of array.
 */

unsigned char find_minimum(unsigned char Array[], unsigned char size_of_array);

/* print_statistics prints the analysis. */
 /**
 * @brief This functions uses printF to print info to screen.
 *
 * @return This functions prints to screen.
 */
 
 void print_statistics(unsigned char Array[], unsigned char size_of_array);


#endif /* __STATS_H__ */
