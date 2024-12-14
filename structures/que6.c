#include <stdio.h>

// Define the structure
struct time
{
  int hours;
  int minutes;
  int seconds;
};

// Function to calculate the time difference
struct time findDifference(struct time t1, struct time t2)
{
  struct time diff;

  // Normalize seconds
  if (t1.seconds < t2.seconds)
  {
    t1.seconds += 60;
    t1.minutes -= 1;
  }
  diff.seconds = t1.seconds - t2.seconds;

  // Normalize minutes
  if (t1.minutes < t2.minutes)
  {
    t1.minutes += 60;
    t1.hours -= 1;
  }
  diff.minutes = t1.minutes - t2.minutes;

  // Hours
  diff.hours = t1.hours - t2.hours;

  return diff;
}

int main()
{
  struct time time1 = {2, 30, 45}; // 2 hours, 45 minutes, 50 seconds
  struct time time2 = {1, 45, 5};  // 1 hour, 20 minutes, 30 seconds

  struct time difference = findDifference(time1, time2);

  printf("Time Difference: %d:%d:%d\n", difference.hours, difference.minutes, difference.seconds);

  return 0;
}
