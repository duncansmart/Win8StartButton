#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
#include <windows.h>
#include <wtsapi32.h>

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
	INPUT input = {0};
	input.type = INPUT_KEYBOARD;

	input.ki.wVk = VK_LWIN;
	input.ki.dwFlags = KEYEVENTF_EXTENDEDKEY;

	// winkey down
	SendInput(1, &input, sizeof(input));

	// winkey up
	input.ki.dwFlags |= KEYEVENTF_KEYUP;
	SendInput(1, &input, sizeof(input));
	
	return 0;
}
