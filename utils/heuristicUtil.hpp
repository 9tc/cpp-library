#include "../template.hpp"
std::random_device seed_gen;
std::mt19937 engine(seed_gen());
clock_t _startTime;
double limitTime = -1;

void initTime(){
    _startTime = clock();
}

double getTime(){
    return (double)(clock() - _startTime) / CLOCKS_PER_SEC;
}

void setLimit(const double limit){
    limitTime = limit;
}

bool checkTime(){
    assert(limitTime != -1);
    return getTime() <= limitTime;
}