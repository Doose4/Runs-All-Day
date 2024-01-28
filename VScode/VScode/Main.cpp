#include <iostream>
//#include <string>
#include <chrono>
#include <thread>
//#include <ctime>
#include "Timer.hpp"

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int main(){
    Timer newt;

    newt.start();

    //... what you want to measure ...
    sleep_for(seconds(2));
    //sleep_until(system_clock::now() + seconds(3));
    
    //std::cout << "printing out 1000 stars...\n";
    //for (int i = 0; i < 1000; ++i) std::cout << "*";
    //std::cout << std::endl;

    newt.end();

    cout << "it took " << newt.elapsed() << " seconds.";

    return 0;
}
