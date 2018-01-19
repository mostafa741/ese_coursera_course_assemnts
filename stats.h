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
 * @brief get some statstics of an array
 *
 * get some statstics of an array such as maximum, minimum, mean, and median.
 * also print the array.
 *
 * @author Mostafa Said
 * @date 19/1/2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief Prints some statstics of an array
 *
 * Take a pointer to unsigned char array and sort array descendingly
 * also prints minimum,maximum,mean,and median
 *
 * @param array pointer to unsigned char array
 * @param length total number of elements
 *
 */
 void print_statistics(unsigned char array[],unsigned int length);

 /**
 * @brief prints an array
 *
 * prints an array in nicely format
 * number[index of the number]
 * 
 * @param array unsigned char array intended to print nicely formarted :)
 * @param length unsigned int total number of elements
 */
 void print_array(unsigned char array[],unsigned int length);

/**
 * @brief find median of an array
 *
 * find median of an array sorded DESCENDINGLY.
 * if number of elements is odd then it must be the middle one 
 * example array of 7 elements it must the 4th element
 * 
 * if number of elements is even then it must be the middle one + the one after it divided by 2
 * example array of 8 elements it must the 4th element + the 5th element 
 *
 * @param array unsigned char array intended to get median of it, IT MUST BE SORTED DESCENDINGLY
 * @param length unsigned int total number of elements
 *
 * @return unsigned char median
 */
 unsigned char find_median(unsigned char array[],unsigned int length);

/**
 * @brief get mean of an array
 *
 * get mean of an array by getting the summation of the array divided by the number of elements. 
 *
 * @param array unsigned char array intended to get mean of it
 * @param length unsigned int total number of elements
 *
 * @return unsigned char mean
 */
 unsigned int find_mean(unsigned char array[],unsigned int length);

/**
 * @brief getting the biggest number of an array
 *
 * getting the biggest number of sorted descendingly array, it just return the first element
 *
 * @param array unsigned char array intended to get maximum of it, IT MUST BE SORTED DESCENDINGLY
 * @param length unsigned int total number of elements
 *
 * @return unsigned char maximum
 */
 unsigned char find_maximum(unsigned char array[],unsigned int length);

/**
 * @brief  getting the smallest number of an array
 *
 * getting the smallest number of sorted descendingly array, it just return the last element
 *
 * @param array unsigned char array intended to get minimum of it, IT MUST BE SORTED DESCENDINGLY
 * @param length unsigned int total number of elements
 *
 * @return unsigned char minimum
 */
 unsigned char find_minimum(unsigned char array[],unsigned int length);

/**
 * @brief sort array descendingly
 *
 * sort array descendingly by using bubble sort algorithm 
 *
 * @param array unsigned char array intended to sort it DESCENDINGLY
 * @param length unsigned int total number of elements
 */
 void sort_array(unsigned char array[],unsigned int length);

#endif /* __STATS_H__ */
