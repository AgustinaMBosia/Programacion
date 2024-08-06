#include <iostream>
using namespace std;

class Base{
	public:
	virtual void f() {
        cout<< "f(): clase base()!!"<< endl;
    }

	void g() {
        cout<< "g(): clase base()!!"<< endl;
    }
};

class Derivada1: public Base{
	public:
	virtual void f() {
        cout<< "f(): clase Derivada1()!!"<< endl;
    }

	void g() {
        cout<< "g(): clase Derivada1()!!"<< endl;
    }
};

class Derivada2: public Base{
	public:
	virtual void f() {
        cout<< "f(): clase Derivada2()!!"<< endl;
    }
	void g() {
        cout<< "g(): clase Derivada2()!!"<< endl;
    }
};

int main()
{
	Base b; Derivada1 d1; Derivada2 d2;
	Base *p = &b;
	p->f();
	p->g();
	p = &d1;
	p->f();
	p->g();
	p = &d2;
	p->f();
	p->g();
   
	return 0;
}