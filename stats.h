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
 * @brief This file contains all the functions for 
 * stats.c
 *
 * There are eight fucntions that are implemented in stats.c. This 
 * file contains all the declarations of the functions so that
 * they can be used in stats.c
 *
 * @author Bhavik Kalpesh
 * @date May 5, 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_statistics(int mean,int median,int minimum,int maximum);
/**
 * @brief Prints the statistics data
 *
 * This function takes an input of 4 variables which are minimum,
 * maximum,mean and median. It then prints all the data.
 *
 * @param mean,median,minimum,maximum
 *
 * @return It does not need to return any value.
 */

void print_array(unsigned char *array,int size);
/**
 * @brief Prints the data of the array
 *
 * This function takes input the address of the array.
 * It stores it into the pointer and then uses it to
 * print the data of the array that is passed to this function.
 *
 * @param *array The array that is supposed to be printed
 * @param size The size of the array
 * @return It does not need to return any value
 */

int find_median(unsigned char *array,int size);
/**
 * @brief Finds the median of the elements in the array.
 *
 * This function takes input the address of the array.
 * It stores it into the pointer and then uses it to
 * calculate the median of the array that is passed on to this function.
 *
 * @param *array The array whose median is supposed to be calculated
 * @param size The size of the array
 * @return It returns the median after calculation.
 */

void sort_array(unsigned char *array,int size);
/**
 * @brief Sorts the elements in the array.
 *
 * This function takes input the address of the array.
 * It stores it into the pointer and then uses it to
 * sort the elements in the array in ascending order.
 *
 * @param *array The array whose elements are supposed to be sorted
 * @param size The size of the array
 * @return It does not return any value
 */


#endif /* __STATS_H__ */
