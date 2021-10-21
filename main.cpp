#include "mystack.h"
#include <iostream>

using namespace std;

void testingGrounds(int expression){
	if (expression == 0){
		// Good stack.
		cout << "Example " << expression << ":\n";
		Stack stk;
		stk.push(1);
		cout << "Current stack: " << stk.pop() << endl;
	}
	else if(expression == 1){
		// Stack size values that are too low.
		cout << "Example " << expression << ":\n";
		Stack stk(0);
		stk.push(1);
		cout << "Current stack: " << stk.pop() << endl;
	}
	else if(expression == 2){
		// exorbitant demands on the stack size.
		cout << "Example " << expression << ":\n";
		Stack stk(2000000000);
		stk.push(1);
		cout << "Current stack: " << stk.pop() << endl;
	}
	else if(expression == 3){
		// Stack with too many pushes.
		cout << "Example " << expression << ":\n";
		Stack stk(1);
		stk.push(1);
		stk.push(1);
		cout << "Current stack: " << stk.pop() << endl;
	}
	else if(expression == 4){
		// Popping an empty stack.
		cout << "Example " << expression << ":\n";
		Stack stk(1);
		stk.push(1);
		cout << "Current stack: " << stk.pop() << endl;
		cout << "Current stack: " << stk.pop() << endl;
	}
}
int main(void) {
	for (int i = 0; i < 5; i++)
	{
		try {
			testingGrounds(i);
		}
		catch(stack_bad_alloc sba) {
			cout << "No room for the stack - sorry!" << endl;
		}
		catch(stack_size_error sse) {
			cout << "Stacks of that size don't exist - sorry!" << endl;
		}
		catch(stack_overflow se) {
			cout << "Stack is too small for that many pushes - sorry!" << endl;
		}
		catch(stack_empty su) {
			cout << "Stack is empty - sorry!" << endl;
		}
	}
	return 0;
}