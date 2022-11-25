#include "duration.h"
#include <assert.h>

    Duration::Duration() { //set time 0;
        time = 0;
        alarmHasBeenSet = false;
    }

    Duration::Duration(int t) {
        assert(t >= 0);
        time = t;
    }

    Duration::~Duration() {} //default destructer

    int Duration::getDuration() {
        return time;
    }

    void Duration::setDuration(int t) {
        time = t;
    }

    bool Duration::tick() {
        time++;
        return checkAndUpdateAlarm();
    }

    bool Duration::tick(int dt) {
        time += dt;
        return checkAndUpdateAlarm();
    }

    bool Duration::checkAndUpdateAlarm() {
         if(time > alarm) {
            alarm = 0;
            alarmHasBeenSet = false; //?
            return true;
        }
        else {
            return false;
        }
    }

    void Duration::setAlarm(int t) { 
        assert(t > time);

        alarm = t; 
        alarmHasBeenSet = true;   
    }

    int Duration::getAlarm() {
        return alarm;
    }


