#include<stdio.h>
#include<time.h>
#define SECONDS_OF_YEAR (365.0 * 24 * 3600)
int main()
{
    int end_time = ((int)(~0U>>1));
    unsigned int t_end_time = ((int)~0U);
    int year_time = end_time/ SECONDS_OF_YEAR;
    int t_year_time = t_end_time / SECONDS_OF_YEAR;
    printf("since 1970-01-01 00:00:00\n");
    printf("In %d, int of 32 bits will overflow\n", year_time +  1970);
    printf("In %d, unsigned int of 32 bits will overflow\n", t_year_time +  1970);
    return 0;
}
