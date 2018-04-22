#include <string>
#include <vector>
#include "day.h"
#include "event.h"

using namespace std;

class day {
private:

	string dy;
	vector<event> events;
	int wake;
	int sleep;

public:
	//creates a day
	day(string d) {
		dy = d;
	}

	//sets the name of the day
	void setDay(string d) {
		dy = d;
	}

	//returns the name of the day
	string getDay() {
		return dy;
	}

	bool addEvent(event a)
	/*
	* Function will check to see if an event can be added.
	* Check is done by seeing if the assignment/event's time slot is not taken up within the day already. 
	* If so, the bool value will return true and the event will be added into the event vector.
	* Otherwise, the bool value will return false, indicating that there was another event in the desired time slot.
	*/
	
	{

		int time = a.getTime;
		//goes through the events and returns false if event cannot be added
		for (int x = 0; x < events.size(); x++) {
			int start = events[x].getTime();
			int end = events[x].getLength() + start;
			int eventEnd = a.getTime() + a.getLength();
			if (a.getTime() >= start && a.getTime <= end) {
				return false;
			}
			if (eventEnd >= start && eventEnd <= end) {
				return false;
			}
			events.push_back(a);
		}
		return true;
	}

	bool removeEvent(event a) 
	/*
	* Function will check to see if an event can be removed. 
	* Check is done by iterating through the vector, checking to see if the assignment wanting to be deleted 
	* is within the vector.
	* If so, the bool value will return true and the event will be removed from the vector.
	* Otherwise, the bool value will return false, indicating that the event doesn't exist within the vector 
	* or that the event could not have been found.
	*/
		
	{
		bool removed = false;
		for (int x = 0; x < events.size(); x++) {
			if (events[x] == a) {
				events.erase(events.begin() + x);
				removed = true;
			}
		}
		return removed;
	}

	//returns the vector of events
	vector<event> getEvents() {
		return events;
	}	
	
	// sets the waking time 
	void setWake(int n)
	{
		wake = n;
	}
	
	// gets the waking time 
	int getWake()
	{
		return wake;
	}

	// sets the sleeping time 
	void setSleep(int n)
	{
		sleep = n;
	}
	
	// gets the sleeping time
	int getSleep()
	{
		return sleep;
	}

};

			
