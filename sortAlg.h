#ifndef SORTALG_H_
#define SORTALG_H_

#include "day.h"
#include "event.h"
#include "user.h"
#include <vector>
#include <string>

using namespace std;

class sortAlg
{
    private:
        user currentUser;
        int size;
        day* size;
        vector<assignment> event;
        vector<event> chunks;
    
    public:
        sortAlg(day w[], int size, vector<assignment> e);
        void insertEvent(event e);
        event findLargest();
        void Chunk();

};

#endif
