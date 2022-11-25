#include "duration.h"
#include <iostream>
using namespace std;
// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    Duration d; 
    cout << " " << d.getDuration() << endl; //print 0

    Duration l(10); 
    cout << " " << l.getDuration() << endl; //print 10

    d.setAlarm(10); 

    cout << " " << d.tick() << endl; //print false

    cout << " " << d.getDuration() << endl; //print 1

    cout << " " << d.tick(11) << endl; //print true

    cout << " " << d.tick() << endl; //alarm should reset so print true

    d.setAlarm(2); //assert



    

    



    
    return 0;
}