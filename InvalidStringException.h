#pragma once
#include "BaseException.h"

class InvalidStringException :public BaseException {
public:
	InvalidStringException() {
		error_message = "\ninvalid string\n";
	}
	InvalidStringException(std::string error) {
		error_message = error;
	}

	virtual const std::string getError() const override {
		return error_message;
	}
};
