#include <fstream>
#include <iostream>
#include <vector>
#include "structs.h"
#include "fun_file.h"


std::ofstream file("C:\\Users\\Admin\\Desktop\\лабы по оаипу 2 сем\\лабораторная 1\\проект\\файл.txt");
void savefile(int len,int active[], std::vector<houses>& arr3, std::vector<animal>& arr4) {
	for (int i = 0; i < len; i++){
		if (active[i] == 1) {
			for (int z = 0;z < 1;z++) {
				file << arr3[z].kol_floor << arr3[z].age << arr3[z].kol_window;
			}
			auto begin = arr3.begin();
			arr3.erase(begin, begin + 1);
			file << std::endl; 
		}
		else if (active[i] == 2) {
			for (int x = 0; x < 1; x++) {
				file << arr4[x].kol_foot << arr4[x].heigt << arr4[x].ves;
			}
			auto begin = arr4.begin();
			arr4.erase(begin, begin + 1);
			file << std::endl;
		}
	}
	file.close();
}
std::ifstream file1("C:\\Users\\Admin\\Desktop\\лабы по оаипу 2 сем\\лабораторная 1\\проект\\файл.txt");
void readfile(int len) {
	char massiv[100];
	file1 >> massiv[0];
	for (int i = 1;!file1.eof(); i++) {
			std::cout << massiv[i-1] << " ";
			file1 >> massiv[i];
			if ((i + 3) % 3 == 0) {
				std::cout << std::endl;
			}
	}
	file1.close();
};