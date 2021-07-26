#pragma once
#include "MatrixOperationsException.h"

class NotConsistentException :public MatrixOperationsException {
public:
	NotConsistentException() {
		error_message = "\nmatrices are not consistent\n";
	}
	NotConsistentException(std::string error) {
		error_message = error;
	}

	virtual const std::string getError() const override {
		return error_message;
	}
};