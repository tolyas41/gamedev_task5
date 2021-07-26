#pragma once
#include "BaseException.h"

class MatrixOperationsException : public BaseException {
public:
	virtual const std::string getError() const override {
		return error_message;
	}
};

