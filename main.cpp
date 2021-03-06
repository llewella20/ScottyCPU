/**
 *	Main file for ScottyCPU executable.
 */

//#define	NDEBUG			// "No Debug" : comment to enable debugging
#define	THROW_EXCEPTIONS	// Uncomment to enable Exception checking and throwing.

#include <iostream>

#include "utils.hpp"

#ifndef NDEBUG
#include "UnitTest.hpp"
#endif

using namespace std;

/**
 *	\brief	The current version of this program.
 */
static float scottyVersion = 0.3;

/**
 *	Run main program.
 */
int main(int argc, char *argv[]) {

#ifndef NDEBUG
	SysUtils::setTitle(scottyVersion, true);
	runTests();
#else
	// Normal Execution
	SysUtils::setTitle(scottyVersion, false);
#endif

	return 0;
}
