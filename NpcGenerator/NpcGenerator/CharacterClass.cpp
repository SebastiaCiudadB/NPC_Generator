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

	void setCharacter() {

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

	void setSize() {

	}

	void setConstitution() {

	}

	void setWeight() {

	}

	void setHeight() {

	}
};

ref class human : public character {
public:
	human() {
		race = "Human";
		setGender();
		setSexualOrientation();
		setAge();
	}

};

ref class elf : public character {
public:
	elf() {
		race = "Elf";
		setGender();
		setSexualOrientation();
		setAge();
	}

	void setAge() {
		int minAge = 10;
		int maxAge = 700;

		Random^ rand = gcnew Random(DateTime::Now.Millisecond);

		age = rand->Next(minAge, maxAge + 1);
	}
};