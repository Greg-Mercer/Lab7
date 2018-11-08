#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include "Course.hpp"

using namespace std;

/*
 * print schedule - outputs course schedule to the screen
 * @param - add any new parameters you need
 */
void printSchedule(priority_queue<Course> pq) {
    while(!pq.empty()) {
        cout << pq.top();
        pq.pop();
    }
}

void printConflicts(priority_queue<Course> pq) {

}

int main () {

    priority_queue<Course> courses;

    ifstream file;
    file.open("../Lab7/courses.txt");
    string word;

    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        string title;
        char day;
        unsigned int start, finish;
        iss >> title;
        iss >> day;
        iss >> start;
        iss >> finish;
        Course::dayOfWeek dow = static_cast<Course::dayOfWeek>(day);
        courses.push(Course(title, dow, start, finish));
    }

    printSchedule(courses);

    return 0;
}