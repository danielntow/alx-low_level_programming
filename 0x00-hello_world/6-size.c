#include <stdio.h>

int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
printf("char: %lu\n", sizeof(char));
printf("short: %lu\n", sizeof(short));
printf("int: %lu\n", sizeof(int));
printf("long: %lu\n", sizeof(long));
printf("long long: %lu\n", sizeof(long long));
printf("float: %lu\n", sizeof(float));
printf("double: %lu\n", sizeof(double));
printf("long double: %lu\n", sizeof(long double));


return (0);
}
