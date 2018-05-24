using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

class Employee{

private:
	string name;
	int number;
	string hireDate;

public:
	Employee(string _name, int _number, string _hireDate){

		name = _name;
		try {
			number = _number;
		} catch (Exception e) {
		}
		hireDate = _hireDate;
	}
	void setName(string s){
		name = s;
	}
	void setNumber(int i){
		number = i;
	}
	void setHireDate(string s){
		hireDate = s;
	}

	string getName(){ return name; }
	int getNumber(){ return number; }
	string getHireDate(){ return hireDate; }

};


