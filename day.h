#ifndef CODE_H_
#define CODE_H_

#include <string>
#include <vector>
#include "event.h"

using namespace std;

class day
{
        private: 
              string dy;
              vector<event> events;
              int wake;
              int sleep;
              
        public:
              day(string d);
              void setDay(string d);
              string getDay();
              bool addEvent(event a);
              bool removeEvent(event a);
              vector<event> getEvents();
              void setwake(int n);
              void setSleep(int n);
              int getWake();
              int getSleep();

};

#endif
