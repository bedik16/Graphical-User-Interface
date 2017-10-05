#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string>
#include "GPIO.h"
#include "BOX.h"

using namespace std;

int main(void)
{
  BOX box;
  box.set_rasp();
  cout << " on \n" << flush;
  sleep(3);
  box.reset_rasp();
  cout << " off \n" << flush;
  sleep(3);
  cout << " on \n" << flush;
  box.set_rasp();
  sleep(3);
  box.reset_rasp();
  cout << " off \n" << flush;
  sleep(3);

  return 0;
}












