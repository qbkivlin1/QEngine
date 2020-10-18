#include "launch_windows.h"
#include "engine.h"
#include <windows.h>

int main()
{
	engine_init();

	while (1)
	{
		Sleep(16);
		engine_tick();
	}

	engine_exit();
}
