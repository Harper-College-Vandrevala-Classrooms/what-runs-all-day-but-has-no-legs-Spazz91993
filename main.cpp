#include<ctime>
#include<iostream>
using namespace std;
class Timer{
    public:
    void start(){
        startTime = time(NULL);
    }
    void stop(){
        stopTime = time(NULL);
    }
    void elapsed(){
        elapsedTime = stopTime - startTime;
        cout <<"Wow, that took " << elapsedTime<<" whole seconds!" << endl;
    }
    private:
    time_t startTime=0;
    time_t stopTime=0;
    time_t elapsedTime=0;
};

int main(){
    Timer clockOne;
    clockOne.start();
    for(int i=0;i<1000000;i++){
        if(i%2==0){
            cout << "tick" <<endl;
        }
        else{
            cout << "tock"<<endl;
        }
    }
    clockOne.stop();
    clockOne.elapsed();
}