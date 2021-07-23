#pragma once
#include "MatrixOperationsException.h"

class NotConsistent :public MatrixOperationsException {
public:
	NotConsistent() {
		error_message = "\nmatrices are not consistent\n";
	}
	NotConsistent(std::string error) {
		error_message = error;
	}

	virtual const std::string getError() override {
		return error_message;
	}
};