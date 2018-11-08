#include "Course.hpp"

using namespace std;

Course::Course (string title, dayOfWeek day, unsigned int start_time, unsigned int finish_time) : title (title), day (day), start_time (start_time), finish_time (finish_time)
{
}
Course::Course (const Course & m) : title (m.title), day (m.day), start_time (m.start_time), finish_time (m.finish_time)
{
}

Course & Course::operator =(const Course & m) {
    Course temp(m);
    swap(*this, temp);
    return *this;
}

void swap(Course& first, Course& second) {
    using std::swap;
    swap(first.title, second.title);
    swap(first.day, second.day);
    swap(first.start_time, second.start_time);
    swap(first.finish_time, second.finish_time);
}

bool Course::operator == (const Course & m) const {
    return this->title == m.title && this->day == m.day && this->start_time == m.start_time
        && this->finish_time == m.finish_time;
}

bool Course::operator < (const Course & m) const {
    if(this->day != m.day) {
        return dayVal(this->day) > dayVal(m.day);
    } else {
        return this->start_time > m.start_time;
    }
}

int dayVal(Course::dayOfWeek d) {

    switch(d) {
        case 'M' : return 0;
        case 'T' : return 1;
        case 'W' : return 2;
        case '?' : return 3;
        case 'F' : return 4;
        default : return -1;
    }

}

ostream & operator << (ostream &os, const Course & m) {

    os << m.title << " " << string(1, m.day) << " " << m.start_time << " " << m.finish_time << endl;

    return os;
}