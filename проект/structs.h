#pragma once


struct houses {
	int kol_floor;
	int age;
	int kol_window;
};


struct animal {
	int kol_foot;
	int heigt;
	int ves;
};

union structs {
	houses str1;
	animal str2;
};