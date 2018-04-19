#include "day.h"
#include "event.h"
#include <vector>
#include <string>
using namespace std;

class sortAlg{
	private:
		day[] week;
		vector<event> events;
		vector<event> chunks;

	public:
		sortAlg(day[] w,vector<event> e){
			week=w;
			events=e;
		}
		
		void insertEvent(event e);

}

void insertEvent(event e)
{
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
