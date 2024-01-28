#include <iostream>
#include <chrono>
#include <thread>
#include "timer.hpp"


using namespace std;
using namespace std::chrono;


//Dog::Dog(string name)
//{
//	this->name = name;
//}

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

	//std::cout << "It took me " << time_span.count() << " seconds.";
	//std::cout << std::endl;

	return time_span.count();
};

int Timer::runner(int t) {

    Timer newt;

    newt.start();

    //wait time
    this_thread::sleep_for(seconds(t));

    newt.end();

    return newt.elapsed();
};