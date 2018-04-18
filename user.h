#ifndef CALENDAR_USER_H
#define CALENDAR_USER_H

#include <iostream>
#include <string>

using namespace std;

class user
{
    private:
        string name;
        int sleep;
        int wake;

    public:
        void setName(string name);
        void setWake(int n);
        void setSleep(int n);
        string getName();
        int getWake();
        int getSleep();
};

#endif
