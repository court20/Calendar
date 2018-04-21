#include "day.h"
#include "event.h"
#include "user.h"
#include <vector>
#include <string>

using namespace std;

class sortAlg {

private:
    user currentUser;
    day* week;
    vector<event> events;
    vector<event> chunks;

public:
    sortAlg(day w[],vector<event> e,user u ){
        week=w;
        currentUser=u;
        events=e;
        chunks=chunk();

        for(int x=0; x<chunks.size();x++)
        {
            event largest= findLargest();
            bool hasSpace= false;

            for(int y=0; y<week.size();y++)
            {
                vector<event> temp=week[x].getEvents;
                if(temp.size()==0){
                    if(abs(u.getWake()-u.getSleep()>largest.getLength()))
                    {
                        largest.setTime(u.getWake());
                        week[y].addEvent(largest);
                    }
                }
                else{
                    for(int z=0; z<temp.size(); z++)
                    {
                        largest.setTime(temp[z].getTime-temp[z].getLength());
                        if(week[y].addEvent(largest))
                        {
                            break;
                        }
                        largest.setTime(temp[z].getTime+temp[z].getLength());
                        if(week[y].addEvent(largest))
                        {
                            break;
                        }
                    }
                }
            }
        }

    }


void insertEvent(event e)
{

       /*
	*use the user info on what day during the week the event is on
	*if the day to compare lines up with the particular day in the week
	*the event is then inserted into that day
	*the time and information such as that it gets inserted into the correct place during the day
	*the object itself holds its charastceristics
	*/

    string dayToCompare = e.getDay;

    for(int i = 0; i < week.size(); i++)
    {
        if(week[i].getDay() == dayToCompare)
        {
            w[i].addEvent(e);
            break;
        }

    }
}


event findLargest(){

    int largest;
    int newest;

    for(int i = 0; i < chunks.size() ;i++){

        if(i == 0){
            largest = chunks[i].getLength();
        }
        else{
            newest = chunks[i].getLength();
            if(newest > largest){
                int location = i;
            }
        }
    }
    event e = chunks[location];
    chunks.erase(chunks[location]);
    return e;

}


vector Chunk() {
    /*
     * loop through all assignments
     * go through their individual modularity values
     * split them into a number of chunks equal to modularity
     * figure out a way to create a variable amount of variables (DONE)
     * Ways to create a variable amount of variables:
     * vector<int> ints;
     * or
     * int *px = new int[n]; //(n variables, n is known at runtime)
     */

    for(int i = 0; i < events.size() ;i++){
        int modularity = events[i].getModularity();
        int time = events[i].getLength();
        int split = time / modularity;

        for(int k =0; k < modularity; k++){
            event temp= new event(events[i].getName(), events[i].getDay(), events[i].getTime(), events[i].getRest(), split, events[i].getRepeat());
            chunks.push_back(temp);
        }

    }
}

}
