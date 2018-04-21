#include <string>
#include "event.h"
using namespace std;

class event{
	
	private:
		string name;
		string day;
		int time;
		int rest;
		int length;
		bool  repeat;
	
	public:
		//all of the attributes of the event
		event(string n, string d, int t, int r, int l, bool r){
			name=n;
			day=d;
			time=t;
			rest=r;
			length=l;
			repeat=r;
		}
	
		//setters and getters for the attributes
		void setName(string n) {
			name=n;
		}

		void setDay(string n) {
			day=n;
		}

		void setTime(int n) {
			time=n;
		}

		void setRest(int n) {
			rest=n;
		}
		
		void setLength(int n) {
			length=n;
		}
		
		void setRepeat(bool n) {
			repeat=n;
		}

		string getName() {
			return name;
		}
		
		string getDay() {
			return day;
		}
		
		int getTime() {
			return time;
		}

		int getLength() {
			return length;
		}
		
		int getRest() {
			return rest;
		}
		
		bool getRepeat() {
			return repeat;
		}

};

class assignment: public event{
	private:
		int modularity;
	public:
		assignment(string n, string d, int t, int r, int l, bool r, int m){
			event(n, d, t, r, l, r, m);
			{
				modularity=m;
			}
		}

		void setModularity(int m) {
			modularity=m;
		}

		int getModularity() {
			return modularity;
		}

};


class excercise : public event {

public:
    excercise(string n, string d, int t, int r, int l, bool rpt){
        event(n, d, t, r, l, rpt){
		
            if( t < 30){
		    
                cout << "You need to work out for 30 or more minutes";
            }
            if (rpt == false){
		    
                cout << "You need to work out at least 3 days a week";
            }
        }
    }

};

class vacation : public event {
    int clear = 24;

public:
    vacation(string n, string d, int t, int r, int l, bool rpt){
        event(n,d,t,r,l,rpt){
            if (l < 18){
                cout << "This is not a vacation if it is less than one day";
            }

        }

        void blockEvents{
                t = clear;
        };
    }
};

class eat: public event
{
	eat(string n, string d, int t, int r, int l, bool rpt)
	{
		event(n,d,t,r,l,rpt);
		{
			if(rpt == false)
			{
				cout << "You're only eating " << n << "once this week? Are you sure?";
			}

			if(n.toLower() == "breakfast")
			{
				if(t >= 11)
				{
					cout << "You're eating breakfast really late. Try eating breakfast earlier.";
				}

				if(t <= 5)
				{
					cout << "Wow, you're eating breakfast pretty early.";
				}
			}

			if(n.toLower() == "lunch")
			{
				if(t >= 16)
				{
					cout << "You're eating lunch really late. Try eating lunch earlier";
				}

				if(t <= 10)
				{
					cout << "Dang, you're eating lunch pretty early.";
				}
			}

			if(n.toLower() == "dinner")
			{
				if(t >= 23 || t < 2)
				{
					cout << "Dinner, this late? Going out for midnight munchies I see :)";
				}

				if(t <= 16)
				{
					cout << "If you eat dinner this late, you'll be hungry again before you sleep...";
				}
			}
		}
	}
};

