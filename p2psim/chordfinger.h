#ifndef __CHORDSUCCLISTFINGER_H
#define __CHORDSUCCLISTFINGER_H


/* ChordFinger implements finger table in addition to Chord with succ list*/
#include "chord.h"

class ChordFinger: public Chord {
  public:
    ChordFinger(Node *n, Args& a, LocTable *l = NULL);
    ~ChordFinger() {};
    string proto_name() { return "ChordFinger"; }

    void stabilize();
    bool stabilized(vector<CHID> lid);
    void reschedule_stabilizer(void *x);
    void dump();
    //void init_state(vector<IDMap> ids);

  protected:
    void fix_fingers();
    uint _base;
    uint _maxf;
    uint _numf; //number of fingers ChordFinger should be keeping
};

#endif
