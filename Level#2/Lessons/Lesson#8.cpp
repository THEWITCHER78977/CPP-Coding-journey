// Lesson#8 : - Library: Create Your Own Library
#include <iostream>

//Calling ur Library
#include "MyLib.h"

using namespace std;
//using namesapce MyLib
using namespace MyLib;

int main()
{
	MyLib::Test();
	Test();
	return 0;
}