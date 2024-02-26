#include <iostream>
#include <vector>
#include "fun_massiv.h"
#include "fun_file.h"

std::vector<houses> arr1;
std::vector<animal> arr2;
std::vector<houses> arr3;
std::vector<animal> arr4;

const int len = 3;

int main() {
	structs arr[len];
	int active[len];
	int j = 0;
	for (;j < len;j++) {
		int chose;
		std::cout << "vvedite 1 or 2: ";
		std::cin >> chose;
		if (chose == 1) {
			input(arr, len,active, chose, j,arr1 , arr2,arr3,arr4);
		}
		else if (chose == 2) {
			input(arr, len, active, chose , j,arr1 , arr2 , arr3,arr4);
		}
		else std::cout << "you down" << std::endl;
	}
	savefile(len,active, arr3,arr4);
	output(arr, len, active, arr1, arr2);
	readfile(len);
	dell(arr, len);
	return 0;
}