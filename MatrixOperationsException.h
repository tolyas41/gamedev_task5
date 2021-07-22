#pragma once
#include <string>

class MatrixOperationsException {
private:
	std::string error_message;
public:
	MatrixOperationsException(std::string error)
		: error_message(error) {

	}

	const std::string getError() {
		return error_message;
	}
};

