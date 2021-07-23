#include "Matrix.h"
#include <iostream>

int main() {

	Matrix a_obj(22, 7, 4);
	try {
		a_obj /= 0;
		std::cout << "\na_obj : \n";
		a_obj.print_array();
	}
	catch (BaseException& ex) {
		std::cerr << ex.getError();
	}


	double arr[5][5] = { {4,2,3,5,5},{4,5,6,2,3},{7,2,9,2,3},{10,11,12,3,8},{4,5,9,5,4} };
	Matrix b_obj(*arr, 5, 4);
	try {
		Matrix c_obj = a_obj / b_obj;
		std::cout << "\nc_obj : \n";
		c_obj.print_array();
	}
	catch (BaseException& ex) {
		std::cerr << ex.getError();
	}


	Matrix d_obj(3, 3, 4);
	Matrix e_obj(4, 5, 5);
	try {
		Matrix f_obj = d_obj * e_obj;
		f_obj.print_array();
	}
	catch (BaseException& ex) {
		std::cerr << ex.getError();
	}

	try {
		char str_numbers[] = "[101d,202,303; 404,505,606; 9,8,7]";
		Matrix f_obj(str_numbers);
		f_obj.print_array();
	}
	catch (BaseException& ex) {
		std::cerr << ex.getError();
	}


	return 0;
}

