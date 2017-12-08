// Preprocessor directives.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#define getmax(a,b) ((a)>(b)?(a):(b))

int main()
{
	int x = 5, y;
	y = getmax(x, 3);
	cout << y << endl;
	cout << getmax(7, x) << endl;


    return 0;
}

