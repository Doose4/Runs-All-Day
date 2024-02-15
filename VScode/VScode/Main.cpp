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

void tester() {
    Timer m;

    cout << "Starting tests..." << endl;
    assert(m.runner(0) == 0);
    assert(m.runner(1) == 1);
    assert(m.runner(2) == 2);
    assert(m.runner(3) != 2);
    cout << "Your tests succeeded!" << endl;
}

int main() {

    tester();

    Timer newt;

    newt.start();
    sleep_for(seconds(2));

    newt.end();

    cout << "it took " << newt.elapsed() << " seconds.";

    return 0;
}
