#ifndef CALENDAR_USER_H
#define CALENDAR_USER_H

#include <iostream>
#include <string>

using namespace std;

class user
{
    private:
        string name;
        int sleep[7];
        int wake[7];

    public:
        void setName(string name);
        void setWake(int n, int day);
        void setSleep(int n, int day);
        string getName();
        int getWake(int day);
        int getSleep(int day);
};

#endif
