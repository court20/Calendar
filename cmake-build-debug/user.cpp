#include <iostream>
#include <string>

using namespace std;

class user
{
    private:
        int wake; // indicates waking hours determined by user
        int sleep; // indicates sleeping hours determined by user
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

        void setSleep(int n)
        {
            sleep = n;
        }

        int getSleep()
        {
            return sleep;
        }

        void setWake(int n)
        {
            wake = n;
        }

        int getWake()
        {
            return wake;
        }

};
