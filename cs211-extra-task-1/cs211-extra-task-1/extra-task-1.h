#ifndef EXTRA_TASK_1_H
#define EXTRA_TASK_1_H

// Return the number of seconds later that a time in seconds
double seconds_difference(double time_1, double time_2);
// Return the number of hours later that a time in seconds
double hours_difference(double time_1, double time_2);
double to_float_hours(int hours, int minutes, int seconds);
double to_24_hour_clock(double hours);
double time_to_utc(int utc_offset, double time);
double time_from_utc(int utc_offset, double time);

/* EXTRA_TASK_1_H: */
#endif