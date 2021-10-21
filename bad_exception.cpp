#include <iostream>
#include <exception>
using namespace std;

void unexp(void) {
	cout << "Unexpected exception arrived!" << endl;
	throw;
}
void function(void) {// throw(bad_exception) {
	throw 3.14; 
}
int main(void) {
	// will be called when an unexpected exception is thrown; not when an exception is unhandled. 
	// The unexpected handler is called when a dynamic exception specification is violated.
	set_unexpected(unexp); 
	try {
		function();
	} catch(double f) {
		cout << "Got double" << endl;	
	} catch(bad_exception bad) {
		cout << "It's so bad..." << endl;
	}
	cout << "Done" << endl;
	return 0;
}