#include <cstdlib>;
#include <ctime>;

using namespace System;

ref class character {
public:
	String^ race;
	String^ gender;
	String^ sexualOrientation;
	int age;

	character() {

	}

	void setAge() {
		int minAge = 20;
		int maxAge = 100;

		Random^ rand = gcnew Random(DateTime::Now.Millisecond);

		age = rand->Next(minAge, maxAge + 1);
	}
};