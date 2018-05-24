using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "employee.cpp"

class ProductionWorker : public Employee{

private:
	int shift;
	double payRate;

public:
	ProductionWorker(int _shift, double _payRate){
		shift = _shift;
		payRate = _payRate;
	}

	void setShift(int i){
		shift = i;
	}
	void setSPayRate(int i){
		payRate = i;
	}

	int getShift(){ return shift; }
	double getPayRate(){ return payRate; }

};

