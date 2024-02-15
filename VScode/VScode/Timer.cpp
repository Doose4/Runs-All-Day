#include <iostream>
#include <chrono>
#include <thread>
#include "Timer.hpp"


using namespace std;
using namespace std::chrono;

int Timer::start()
{
	first = steady_clock::now();

	return 0;
};

int Timer::end()
{
	last = steady_clock::now();

	return 0;
};

int Timer::elapsed()
{
	duration<double> time_span = duration_cast<duration<double>>(last - first);

	return time_span.count();
};

int Timer::runner(int t) {

    Timer newt;

    newt.start();

    this_thread::sleep_for(seconds(t));

    newt.end();

    return newt.elapsed();
};