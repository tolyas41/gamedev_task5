#pragma once
#include <string>

class BaseException {
protected:
	std::string error_message;
public:
	virtual const std::string getError() const = 0;
};

