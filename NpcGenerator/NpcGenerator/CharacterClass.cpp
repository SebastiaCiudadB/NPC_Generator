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
		int arrayLenaght = 4;

		array<String^>^ arr = gcnew array<String^>(arrayLenaght);
		arr[0] = "Heterosexual";
		arr[1] = "Homosexual";
		arr[2] = "Bisexual";
		arr[3] = "Asexual";

		double prob[] = {0.25, 0.25, 0.25 , 0.25 };

		double totalProb = 0.0;
		for (int i = 0; i < arrayLenaght; i++) {
			totalProb += prob[i];
		}
		for (int i = 0; i < arrayLenaght; i++) {
			prob[i] /= totalProb;
		}

		Random^ rand = gcnew Random(DateTime::Now.Millisecond);
		double randomProb = rand->NextDouble();

		int selectedIndex = 0;
		double cumulativeProb = prob[0];

		while (randomProb > cumulativeProb && selectedIndex < 4) {
			selectedIndex++;
			cumulativeProb += prob[selectedIndex];
		}

		sexualOrientation = arr[selectedIndex];
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
		int arrayLenaght = 9;

		array<String^>^ arr = gcnew array<String^>(arrayLenaght);
		arr[0] = "Skinny";
		arr[1] = "Slim";
		arr[2] = "Normal";
		arr[3] = "Heafty";
		arr[4] = "Strong";
		arr[5] = "Robust";
		arr[6] = "Brawny";
		arr[7] = "Fat";
		arr[8] = "Obese";

		double prob[] = { 0.05, 0.1, 0.3 , 0.4, 0.2, 0.2, 0.1 , 0.1, 0.05 };

		double totalProb = 0.0;
		for (int i = 0; i < arrayLenaght; i++) {
			totalProb += prob[i];
		}
		for (int i = 0; i < arrayLenaght; i++) {
			prob[i] /= totalProb;
		}

		Random^ rand = gcnew Random(DateTime::Now.Millisecond);
		double randomProb = rand->NextDouble();

		int selectedIndex = 0;
		double cumulativeProb = prob[0];

		while (randomProb > cumulativeProb && selectedIndex < 4) {
			selectedIndex++;
			cumulativeProb += prob[selectedIndex];
		}

		constitution = arr[selectedIndex];
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

	void setSkinColor() {

	}

	void setEyeColor() {

	}

	void setHairColor() {

	}

	void setHairStile() {

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