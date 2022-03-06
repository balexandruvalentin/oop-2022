#pragma once

class Student {
	char name[25];
	float Math;
	float English;
	float History;

public: 
	void Init();

	void setName(const char* name);
	void setMath(float grade);
	void setEnglish(float grade);
	void setHistory(float grade);
	
	const char* getName() const;
	float getMath() const;
	float getEnglish() const;
	float getHistory() const;
	float getAverage() const;

	void Print(float Average);
};