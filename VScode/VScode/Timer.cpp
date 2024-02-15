#include <iostream>
#include <chrono>
#include <thread>
#include <string>
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

string Timer::pretty_print(int tm, int ky){
	if (ky == 0) {
		if (tm == 0) {
			return "No time has passed.";
		}
	}

	if (tm < 60) {
		if (tm == 1) {
			return to_string(tm) + " second has passed.";
		}
		return to_string(tm) + " seconds has passed.";
	}
	else if (tm < 3600) {
		if (tm < 1200) {
			return "1 minute " + pretty_print(int(tm % 60),1);
		}
		return to_string(tm/60)+ " minutes " + pretty_print(int(tm % 60), 1);
	}
	else {
		if (tm < 7200) {
			return "1 hour " + pretty_print(int(tm % 3600), 1);
		}
		return to_string(tm / 3600) + " hours " + pretty_print(int(tm % 3600), 1);
	}
};