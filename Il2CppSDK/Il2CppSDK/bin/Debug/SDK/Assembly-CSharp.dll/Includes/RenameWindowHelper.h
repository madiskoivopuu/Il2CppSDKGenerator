#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenameWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenameWindowHelper"));
	}


	template <typename R = RenameWindow*> static R ShowRename(UIWindowsManager* manager, RenameOptions* options) {
		return ((R (*)(void *, UIWindowsManager*, RenameOptions*))(Il2CppBase() + 0x13A2848))(0, manager, options);
	}
	template <typename R = RenameWindow*> static R GetRename(UIWindowsManager* manager, RenameOptions* options) {
		return ((R (*)(void *, UIWindowsManager*, RenameOptions*))(Il2CppBase() + 0x13A28F0))(0, manager, options);
	}

};

