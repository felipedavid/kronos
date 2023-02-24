#include <windows.h>
#include <stdio.h>

#include "def.h"
#include "wow.h"
#include "patches.h"
#include "commands.h"

HMODULE module;

b32 DllMain(HINSTANCE inst, u32 reason, void *reserved) {
	module = inst;

	switch (reason) {
	case DLL_PROCESS_ATTACH: {
		ConsoleWrite("DLL loaded!", C_RED);

		ConsoleWrite("Remapping console key to End", C_YELLOW);
		ConsoleSetHotKey(KEY_END);

		ConsoleWrite("Registering new commands", C_YELLOW);
		register_commands();

		ConsoleWrite("Applying essential patches", C_YELLOW);
		apply_essential_patches();
	} break;
	case DLL_PROCESS_DETACH: {
		ConsoleWrite("Unloding dll!", C_RED);

		ConsoleWrite("Removing patches", C_YELLOW);
		remove_essential_patches();

		ConsoleWrite("Unregistering commands", C_YELLOW);
		unregister_commands();
	} break;
	}
	return true;
}
