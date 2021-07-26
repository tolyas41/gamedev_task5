#pragma once
#include "MatrixOperationsException.h"

class DivideByZeroException :public MatrixOperationsException{
public:
	DivideByZeroException() {
		error_message = "\ncannot divide by zero\n";
	}
	DivideByZeroException(std::string error) {
		error_message = error;
	}

	virtual const std::string getError() const override {
		return error_message;
	}
};

