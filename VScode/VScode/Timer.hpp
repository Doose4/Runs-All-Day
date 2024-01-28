#include <string>
#include <chrono>
using namespace std;

class Timer
{
private:
	

public:
	chrono::steady_clock::time_point first;
	chrono::steady_clock::time_point last;
	int start();
	int end();
	int elapsed();
};