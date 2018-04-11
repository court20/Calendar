#include <string>
#include <vector>
using namespace std;

class day{
	private:
		string day;
		vector<assignment> events;
	public:
		day(string d){
			day=d;
		}
		void setDay(string d) {day=d;}
		string getDay() {return day;}
		bool addEvent(assignment a){
			int time=a.getTime;

			for(int x=0;x<events.size();x++){
				int start=events[x].getTime();
				int end=events[x].getLength()+start;
				int eventEnd=a.getTime()+a.getLength();
				if(a.getTime()>=start&&a.getTime<=end) {return false;}
				if(eventEnd>=start&&eventEnd<=end) {return false;}
				events.push_back(a);
				return true;
			}
		}
		bool removeEvent(asignment a){
		
		}
};

			
