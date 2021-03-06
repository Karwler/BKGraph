#include "world.h"
#include "filer.h"
#ifdef _WIN32
#include <windows.h>
#endif

WindowSys World::windowSys;

#if defined(_WIN32) && !defined(_DEBUG)
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
#else
int main(int, char**) {
#endif
	return World::winSys()->start();
}
