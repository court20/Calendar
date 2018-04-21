#include "day.h"
#include "event.h"
#include "user.h"
#include <vector>
#include <string>

using namespace std;

class sortAlg{
	private:
		user currentUser;
		day[] week;
		vector<event> events;
		vector<event> chunks;

	public:
		sortAlg(day[] w,vector<event> e,user u ){
			
			week=w;
			currentUser=u;
			events=e;
			chunks=chunk();
			
			for(int x=0; x<chunks.size();x++){
				event largest= findLargest();
				bool hasSpace= false;

				for(int y=0; y<week.size();y++){
					vector<event> temp=week[x].getEvents;
					if(temp.size()==0){
						if(abs(u.getWake()-u.getSleep()>largest.getLength()){
							largest.setTime(u.getWake());
							week[y].addEvent(largest);
						}
					}
					else{
						for(int z=0; z<temp.size(); z++){
							largest.setTime(temp[z].getTime-temp[z].getLength());
							if(week[y].addEvent(largest)){
								break;
							}
							largest.setTime(temp[z].getTime+temp[z].getLength());						
							if(week[y].addEvent(largest)){
								break;
							}						
						}
					}
				}
			}
						
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
	
	/*
	*Loop through all of the chunks
	*Store the length of each of these chunks in variables
	*Newest compares to what is being held in the largest variable
	*Largest is initialzied to the first iteration so that there can be a comparison
	*Store the location of the largest chunk
	*Create a new event at this location and a copy of the event
	*Erase the event at that location because it is now being used
	*/

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

        for(int i = 0; i < chunks.size() ;i++){
               int modularity = chunks[i].getModularity();
               int time = chunks[i].getTime();
               int split = time / modularity;

               newVec = vector<modularity>; //creates an amount of variables equal to variable modularity
               for(int k =0; k < newVec.size(); k++){

                   newVec[k].setTime() = split;
               }


            }
    }
