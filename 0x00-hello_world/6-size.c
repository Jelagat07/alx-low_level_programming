#include <stdio.h>
/**
 * main-Entry point
 *
 * Description- Beginning of code block
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	char chartype;
	int int_type;
	long long_type;
	long long longl_type;
	float float_type;
	/**
	 *  sizeof command to determine size of variables
	*/
	printf("Size of a char:%ld byte(s)\n", sizeof(chartype));
	printf("Size of an int:%ld byte(s)\n", sizeof(int_type));
	printf("Size of a long int:%ld byte(s)\n", sizeof(long_type));
	printf("Size of a long long int:%ld byte(s)\n", sizeof(longl_type));
	printf("Size of a float:%ld byte(s)\n", sizeof(float_type));

	return (0);
}
