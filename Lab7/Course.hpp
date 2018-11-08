// Course.h
#include <iostream>

using namespace std;
struct Course {

enum dayOfWeek {MON = 'M', TUE = 'T', WED = 'W', THUR = '?', FRI = 'F', SAT, SUN};

Course (string title, dayOfWeek day, unsigned int start_time, unsigned int finish_time);
Course (const Course & m);

Course & operator = (const Course & m); // Implements copy and swap
bool operator < (const Course & m) const; // Compares two Courses by their start time
bool operator == (const Course & m) const; // Determines if two Courses are equal
string title; // Name of Course
dayOfWeek day; // Day of Course
unsigned int start_time; // Course start time in HHMM format
unsigned int finish_time; // Course finish time in HHMM format
};

// Helper operator for output
ostream &operator << (ostream &os, const Course & m);

// Helper method for copy and swap
void swap(Course& first, Course& second);

// Gives a given dayOfWeek an integer value used for comparison
int dayVal(Course::dayOfWeek d);