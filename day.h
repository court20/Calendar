#ifndef CODE_H_
#define CODE_H_

#include <string>
#include <vector>

using namespace std;

class day
{
        private: 
              string day;
              vector<assignment> events;
              int wake;
              int sleep;
              
        public:
              day(string d);
              void setDay(string d);
              string getDay();
              bool addEvent(assignment a);
              bool removeEvent(assignment a);
              vector<events> getEvents();
              void setwake(int n);
              void setSleep(int n);
              int getWake();
              int getSleep();

};

#endif
