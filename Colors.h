#pragma once
using namespace std;
// Colors
	const WORD colors[] =
		{
		0x1A, 0x2B, 0x3C, 0x4D, 0x5E, 0x6F,
        0x10A,0x20B,0x30C,0x40D,0x50E,0x60F,
		0xA1, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6,
		};
		
	HANDLE hstdin  = GetStdHandle( STD_INPUT_HANDLE  );
	HANDLE hstdout = GetStdHandle( STD_OUTPUT_HANDLE );
	WORD   index   = 0;
	
		CONSOLE_SCREEN_BUFFER_INFO csbi;
