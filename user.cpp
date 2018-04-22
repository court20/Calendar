#include <iostream>
#include <string>

using namespace std;

class user
{
    private:
        int wake[7]; // indicates waking hours determined by user
        int sleep[7]; // indicates sleeping hours determined by user
        string name;

    public:
        void setName(string n)
        {
            name = n;
        }

        string getName()
        {
            return name;
        }

        void setSleep(int n, int day)
        {
            sleep[day] = n;
        }

        int getSleep(int day)
        {
            return sleep;
        }

        void setWake(int n,int day)
        {
            wake[day] = n;
        }

        int getWake(int day)
        {
            return wake[day];
        }

};
