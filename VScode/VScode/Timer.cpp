#include <iostream>
#include <chrono>
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
