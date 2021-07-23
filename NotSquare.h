#pragma once
#include "MatrixOperationsException.h"

class NotSquare :public MatrixOperationsException {
public:
	NotSquare() {
		error_message = "\nthe divisor matrix is not square\n";
	}
	NotSquare(std::string error) {
		error_message = error;
	}

	virtual const std::string getError() override {
		return error_message;
	}
};
