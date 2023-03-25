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
	double height;

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
		/*There is :
		* - Tiny = 2,5 ft
		* - Small = 5 ft
		* - Medium = 5 ft
		*/
		size = "Medium"; 
	}

	void setConstitution() {
		int slimProb = 20;
		int skinnyProb = 20;
		int normalProb = 20;
		int strongProb = 20;
		int muscularProb = 20;

		Random^ rand = gcnew Random(DateTime::Now.Millisecond);

		int maxNum = 100;
		int aux = rand->Next(1, maxNum + 1);

		int newA, newB, newC, newD, newE;
		newA = maxNum / 100 * slimProb;
		newB = newA + maxNum / 100 * skinnyProb;
		newC = newB + maxNum / 100 * normalProb;
		newD = newC + maxNum / 100 * strongProb;
		newE = newD + maxNum / 100 * muscularProb;

		if (aux < newA) {
			constitution = "Slim";
		}
		else if (aux >= newA && aux < newB) {
			constitution = "Skinny";
		}
		else if (aux >= newB && aux < newC) {
			constitution = "Normal";
		}
		else if (aux >= newC && aux < newD) {
			constitution = "Strong";
		}
		else if (aux >= newD && aux < newE) {
			constitution = "Muscular";
		}
	}

	void setHeight() {
		double minHeight;
		double maxHeight;

		Random^ rand = gcnew Random(DateTime::Now.Millisecond);

		/*if (size == "Tiny") {
			minHeight = 0.1;
			maxHeight = 0.6;

			height = minHeight + (rand->NextDouble() * maxHeight);
		}
		else if (size == "Small") {
			minHeight = 0.6;
			maxHeight = 1.3;

			height = minHeight + (rand->NextDouble() * maxHeight);
		}
		else if (size == "Medium") {
			minHeight = 1.3;
			maxHeight = 2.6;

			height = minHeight + (rand->NextDouble() * maxHeight);
		}*/
	}
};

ref class human : public character {
public:
	human() {
		race = "Human";
		setGender();
		setSexualOrientation();
		setAge();
		setSize();
		setConstitution();
		setHeight();
	}

};

ref class elf : public character {
public:
	elf() {
		race = "Elf";
		setGender();
		setSexualOrientation();
		setAge();
		setSize();
		setConstitution();
		setHeight();
	}

	void setAge() {
		int minAge = 10;
		int maxAge = 700;

		Random^ rand = gcnew Random(DateTime::Now.Millisecond);

		age = rand->Next(minAge, maxAge + 1);
	}
};