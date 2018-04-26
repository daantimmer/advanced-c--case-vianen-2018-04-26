#pragma once

#include <string>

struct Person {
	Person(){}
	explicit Person(std::string name) {
		this->name = name;
	}

	std::string name;
};
