#ifndef EVENTS_H_
#define EVENTS_H_

#include <string>

using namespace std;

class event
{
      private:
            string name;
            string day;
            int time;
            int rest;
            int length;
            bool repeat;
       
       public:
            event(string n, string d, int t, int r, int l, bool rpt);
            void setName(string n);
            void setDay(string n);
            void setTime(int n);
            void setRest(int n);
            void setLength(int n);
            void setRepeat(int n);
            string getName();
            string getDay();
            int getTime();
            int getLength();
            int getRest();
            bool getRepeat();
            
};

class assignment: public event
{
private:
            int modularity;
            
      public:
            assignment (string n, string d, int t, int r, int l, bool rpt, int m);
            void setModularity(int m);
            int getModularity();
            
};

class exercise: public event
{

      public:
            exercise (string n, string d, int t, int r, int l, bool rpt);
            
};

class vacation : public event 
{

      public:
            vacation (string n, string d, int t, int r, int l, bool rpt);
            void blockEvents();
 };

class eat: public event
{
    public:
        eat(string n, string day, int t, int r, int l, bool rpt);
};

#endif
