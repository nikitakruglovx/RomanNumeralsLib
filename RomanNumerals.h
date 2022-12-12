#ifndef DATANUMERALS_H
#define DATANUMERALS_H
#pragma once

#include <iostream>
#include <string>
#include <map>

class RomanNumerals {

private:
	char I = 'I';
	char V = 'V';
	char X = 'X';
	char L = 'L';
	char C = 'C';
	char D = 'D';
	char M = 'M';

	std::map <char, int> dataNumFromRoman;
	std::map <int, std::string> dataNumToRoman;

public:
	void toRoman(int r) {

	}

	int fromRoman(std::string N) {

		dataNumFromRoman[I] = 1;
		dataNumFromRoman[V] = 5;
		dataNumFromRoman[X] = 10;
		dataNumFromRoman[L] = 50;
		dataNumFromRoman[C] = 100;
		dataNumFromRoman[D] = 500;
		dataNumFromRoman[M] = 1000;

		int ch = 0;
		int result = 0;

		for (const char c : N) {
			int N = dataNumFromRoman[c];

			if (N < ch) {
				result += ch;
				ch = N;
			}
			else if (N > ch) {
				if (ch == 0) {
					ch = N;
				}
				else {
					result += N - ch;
					ch = 0;
				}
			}
			else if (N == ch) {
				result += ch + N;
				ch = 0;
			}

		}

		return result + ch;

	}
	
};

#endif