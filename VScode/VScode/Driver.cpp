#include <iostream>
#include <cassert>
#include "Timer.hpp"

using namespace std;

int main()
{
    Timer m;

    cout << "Starting tests..." << endl;
    assert(m.runner(0) == 0);
    assert(m.runner(1) == 1);
    assert(m.runner(2) == 2);
    assert(m.runner(3) != 2);
    cout << "Your tests succeeded!" << endl;
   
    return 0;
}