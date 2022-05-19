#include <stdio.h> 
#include <time.h>

int main(){
	long int s_since_epoch;
	struct tm current_time, *time_ptr;
	int hour, minute, second, day, month, year;
	s_since_epoch = time(0);
	printf("time() - seconds since epoch: %ld\n", s_since_epoch);

	time_ptr = &current_time;
	localtime_r(&s_since_epoch, time_ptr);

	hour = current_time.tm_hour; // dirt. access 
	minute = time_ptr->tm_min;
	second = *((int *) time_ptr);
	printf("Current time is: %02d:%02d:%02d\n", hour, minute, second);

	}
