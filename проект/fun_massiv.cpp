#include <iostream>
#include "fun_massiv.h"
#include <vector>


void input(structs arr[], int len, int active[], int chose, int j, std::vector<houses> &arr1 , std::vector<animal>& arr2 , std::vector<houses>& arr3, std::vector<animal>& arr4) {
	if (chose == 1) {
		active[j] = 1;
		std::cout << "vvedite str1\n";

		std::cin >> arr[j].str1.kol_floor;
		std::cin >> arr[j].str1.age;
		std::cin >> arr[j].str1.kol_window;
		arr1.push_back(arr[j].str1);
		arr3.push_back(arr[j].str1);
	}
	else if (chose == 2) {
		active[j] = 2;
		std::cout << "vvedite str2\n";

		std::cin >> arr[j].str2.kol_foot;
		std::cin >> arr[j].str2.heigt;
		std::cin >> arr[j].str2.ves;
		arr2.push_back(arr[j].str2);
		arr4.push_back(arr[j].str2);
	}
	else std::cout << "pusto";
}

 void dell(structs arr[], int len) {
	int choice;
	std::cout << "vvedite element dla udalenia";
	std::cin >> choice;
	structs arr_s = {};
	arr[choice] = arr_s ;
}

void output(structs arr[], int len,int active[], std::vector<houses> &arr1 , std::vector<animal>& arr2) {
	for (int i = 0;i < len;i++) {
		if (active[i] == 1) {
			std::cout << "str1: \n";
			for (int z = 0;z < 1;z++) {
				std::cout << arr1[z].kol_floor <<"\n" << arr1[z].age << "\n" << arr1[z].kol_window <<"\n";
			}
			auto begin = arr1.begin();
			arr1.erase(begin, begin + 1);
			std::cout << std::endl;
		}
		else if (active[i] == 2) {
			std::cout << "str2:\n";
			for (int x = 0; x < 1; x++) {
				std::cout << arr2[x].kol_foot << "\n" << arr2[x].heigt << "\n" << arr2[x].ves << "\n";
			}
			auto begin = arr2.begin();
			arr2.erase(begin, begin + 1);
			std::cout << std::endl;
		}
		else std::cout << "pusto" << std::endl;
	}
}