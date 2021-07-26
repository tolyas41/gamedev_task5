#pragma once
#include "BaseException.h"

class IntOverflowException :public BaseException {
public:
	IntOverflowException() {
		error_message = "\nint variable overflow!\n";
	}
	IntOverflowException(std::string error) {
		error_message = error;
	}

	virtual const std::string getError() const override {
		return error_message;
	}
};

