class A {  
public:
   explicit A(int) {}
};

class B {  
public:
   B(int) {}
};
int main(void) {
	A a = 1;
	// A a(1)); // implicitly presumed as it’s coded in the following way
	B b = 1;
	return 0;
}