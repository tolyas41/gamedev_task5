#pragma once
#include "MatrixOperationsException.h"

class DivideByZero :public MatrixOperationsException{
public:
	DivideByZero() {
		error_message = "\ncannot divide by zero\n";
	}
	DivideByZero(std::string error) {
		error_message = error;
	}

	virtual const std::string getError() override {
		return error_message;
	}
};

