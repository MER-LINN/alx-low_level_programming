#include<stdio.h>                                                  
                                                                   
/**                                                                
 * main - Entry point                                              
 * prints out the size of various data types using printf          
 * Return: Always 0 (Success)                                      
 */                                                                 
                                                                   
int main(void)                                                     
	                                                                   
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char))
	
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	
	printf("Size of a long long int: %1lu byte(s)\n", sizeof(long long int));
	
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	
	return (0);
}
