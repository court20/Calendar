#include <string>
#include "event.h"
using namespace std;

		//all of the attributes of the event
		event::event(string n, string d, int t, int r, int l, bool rpt){
			name=n;
			day=d;
			time=t;
			rest=r;
			length=l;
			repeat=rpt;
		}
	
		//setters and getters for the attributes
		void event::setName(string n) {
			name=n;
		}

		void event::setDay(string n) {
			day=n;
		}

		void event::setTime(int n) {
			time=n;
		}

		void event::setRest(int n) {
			rest=n;
		}
		
		void event::setLength(int n) {
			length=n;
		}
		
		void event::setRepeat(bool n) {
			repeat=n;
		}

		string event::getName() {
			return name;
		}
		
		string event::getDay() {
			return day;
		}
		
		int event::getTime() {
			return time;
		}

		int event::getLength() {
			return length;
		}
		
		int event::getRest() {
			return rest;
		}
		
		bool event::getRepeat() {
			return repeat;
		}




		assignment::assignment(string n, string d, int t, int r, int l, bool rpt, int m) :event(n, d, t, r, l,  rpt){
			modularity=m;
		}

		void assignment::setModularity(int m) {
			modularity=m;
		}

		int assignment::getModularity() {
			return modularity;
		}



