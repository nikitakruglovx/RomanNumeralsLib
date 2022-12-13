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

public:
	std::string toRoman(int N) {

		if (N >= 1000) { return "M" + toRoman(N - 1000); }
		if (N >= 500) { return N >= 900 ? ("CM" + toRoman(N - 900)) : ("D" + toRoman(N - 500)); }
		if (N >= 100) { return N >= 400 ? ("CD" + toRoman(N - 400)) : ("C" + toRoman(N - 100)); }
		if (N >= 50) { return N >= 90 ? ("XC" + toRoman(N - 90)) : ("L" + toRoman(N - 50)); }
		if (N >= 10) { return N >= 40 ? ("XL" + toRoman(N - 40)) : ("X" + toRoman(N - 10)); }
		if (N >= 5) { return N == 9 ? "IX" : "V" + toRoman(N - 5); }
		if (N > 0) { return N == 4 ? "IV" : "I" + toRoman(N - 1); }
		return "";
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

		for (auto c : N) {
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