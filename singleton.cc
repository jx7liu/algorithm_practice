#include <iostream>
using namepsace std;

class Singleton {
private:
	//singleton class require a private constructor//
	static bool instanceFlag = false;
	//pointer to the singleton instance
	static Singleton *single = NULL;
	Singleton() {}
	
public:
	static Singelton* getInstance () {
		if (!instanceFlag) {
			single = new Singleton();
			instanceFlag = true;
			return single;
		}
		else {
			return single;
		}
	}
	~Singleton() {
		delete single;
		instanceFlag = false;
	}
};


