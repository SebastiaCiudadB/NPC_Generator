#include <cstdlib>;
#include <ctime>;

using namespace System;

ref class character {
public:
	String^ race;
	String^ gender;
	String^ sexualOrientation;
	int age;

	String^ size;
	String^ constitution;
	float weight;
	float height;

	String^ skinColor;
	String^ eyeColor;
	String^ hairColor;
	String^ hairStile;

	character() {

	}

	void setGender() {
		Random^ rand = gcnew Random(DateTime::Now.Millisecond);

		gender = rand->Next(0, 2) == 0 ? "Male" : "Female";
	}

	void setSexualOrientation() {
		int heterosexualProb = 25;
		int homosexualProb = 25;
		int bisexualProb = 25;
		int asexualProb = 25;

		Random^ rand = gcnew Random(DateTime::Now.Millisecond);

		int maxNum = 100;
		int aux = rand->Next(1, maxNum + 1);

		int newA, newB, newC, newD;
		newA = maxNum / 100 * heterosexualProb;
		newB = newA + maxNum / 100 * homosexualProb;
		newC = newB + maxNum / 100 * bisexualProb;
		newD = newC + maxNum / 100 * asexualProb;

		if (aux < newA) {
			sexualOrientation = "Heterosexual";
		}
		else if (aux >= newA && aux < newB) {
			sexualOrientation = "Homosexual";
		}
		else if (aux >= newB && aux < newC) {
			sexualOrientation = "Bisexual";
		}
		else if (aux >= newC && aux < newD) {
			sexualOrientation = "Asexual";
		}
	}

	void setAge() {
		int minAge = 10;
		int maxAge = 100;

		Random^ rand = gcnew Random(DateTime::Now.Millisecond);

		age = rand->Next(minAge, maxAge + 1);
	}
};

ref class human : public character {
public:
	human() {

	}

	void setCharacter() {
		race = "Human";
		setGender();
		setSexualOrientation();
		setAge();
	}
};