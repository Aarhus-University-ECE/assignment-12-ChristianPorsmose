#ifndef _DURATION_H_
#define _DURATION_H_

class Duration {

    private:
    int time; 
    int alarm; 
    bool alarmHasBeenSet;

    public:
    //constructers and destructer
    Duration();
    Duration(int t);
    ~Duration();

    //methods
    int getDuration();
    bool tick();
    bool tick(int dt);
    void setDuration(int t);
    bool checkAndUpdateAlarm();
    void setAlarm(int t);
    int getAlarm();


};

#endif

