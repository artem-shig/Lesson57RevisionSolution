//	[The Odd Count of Digits]
//	Нечётное количество цифр
//
//	Необходимо разработать рекурсивную функцию, которая проверяет,
//	состоит ли заданное пользователем число только из нечётного 
//	количества цифр или нет. 
//	
//	У числа 1234 – количество цифр чётное (even), 
//	а у числа 12345 – количество цифр нечётное (odd). 
// 
//	Число может быть как положительным, так и отрицательным.

#include "logic.h"

int count_dig_number(long long number) {

	if (number == 0) {

		return 0;
	}

	return count_dig_number(number / 10) + 1;
}

bool is_digits_count_odd(long long number) {

	if (number > -10 && number < 10) {
		return true;
	}

	int count = count_dig_number(number);

	return count % 2 != 0 ? true : false;
}
