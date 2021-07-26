#pragma once
#include "MatrixOperationsException.h"

class NotSquareException :public MatrixOperationsException {
public:
	NotSquareException() {
		error_message = "\nthe divisor matrix is not square\n";
	}
	NotSquareException(std::string error) {
		error_message = error;
	}

	virtual const std::string getError() const override {
		return error_message;
	}
};
