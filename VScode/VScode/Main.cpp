#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <ctime>
#include <cassert>
#include "Timer.hpp"

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

//tester program
void tester() {
    Timer m;

    cout << "Starting tests..." << endl;
    cout << m.pretty_print(0) << endl;
    cout << m.pretty_print(1) << endl;
    cout << m.pretty_print(6) << endl;
    cout << m.pretty_print(59) << endl;
    cout << m.pretty_print(60) << endl;
    cout << m.pretty_print(61) << endl;
    cout << m.pretty_print(122) << endl;
    cout << m.pretty_print(500) << endl;
    cout << m.pretty_print(3599) << endl;
    cout << m.pretty_print(3600) << endl;
    cout << m.pretty_print(5050) << endl;
    cout << m.pretty_print(8000) << endl;

    assert(m.runner(0) == 0);
    assert(m.runner(1) == 1);
    assert(m.runner(2) == 2);
    assert(m.runner(3) != 2);
    
    cout << "Your tests succeeded!" << endl;
}

//main program
int main() {

    tester();

    Timer newt;

    newt.start();
    sleep_for(seconds(2));

    newt.end();

    cout << "it took " << newt.elapsed() << " seconds.";

    return 0;
}
