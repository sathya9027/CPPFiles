#include <iostream>
//access specifier inheritance
using namespace std;
class Stud {		//Base Class
public:
	int _public;
private:
	int _private;
protected:
	int _protected;
};

class Stud1 :public Stud {
	//a is public
	//b is not accessible
	//c is protected
};
class Stud2 :private Stud {
	//a is private
	//b is not accessible
	//c is private
};
class Stud3 :protected Stud {
	//a is protected
	//b is not accessible
	//c is protected
};

int main() {
	Stud1 stud1;
	Stud2 stud2;
	Stud3 stud3;
	stud1._public;
	return 0;
}