#pragma once
#include "BaseException.h"

class IntOverflow :public BaseException {
public:
	IntOverflow() {
		error_message = "\nint variable overflow!\n";
	}
	IntOverflow(std::string error) {
		error_message = error;
	}

	virtual const std::string getError() override {
		return error_message;
	}
};

