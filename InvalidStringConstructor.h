#pragma once
#include "BaseException.h"

class InvalidStringConstructor :public BaseException {
public:
	InvalidStringConstructor() {
		error_message = "\ninvalid string\n";
	}
	InvalidStringConstructor(std::string error) {
		error_message = error;
	}

	virtual const std::string getError() override {
		return error_message;
	}
};
