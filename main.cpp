#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string>
#include "GPIO.h"

using namespace std;

int main(void)
{
	GPIO lamp_1("4");
	cout << " on \n" << flush;
	lamp_1.set();
	sleep(3);
	lamp_1.reset();
	cout << " off \n" << flush;
	sleep(3);
	cout << " on \n" << flush;
	lamp_1.set();
	sleep(3);
	lamp_1.reset();
	cout << " off \n" << flush;
	sleep(3);

	return 0;
}
