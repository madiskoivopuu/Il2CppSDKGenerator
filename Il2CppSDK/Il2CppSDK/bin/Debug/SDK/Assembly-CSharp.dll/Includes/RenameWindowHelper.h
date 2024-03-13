#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenameWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenameWindowHelper"));
	}


	template <typename T = RenameWindow*> static T ShowRename(UIWindowsManager* manager, RenameOptions* options) {
		return ((T (*)(void *, UIWindowsManager*, RenameOptions*))(Il2CppBase() + 0x13A2848))(0, manager, options);
	}
	template <typename T = RenameWindow*> static T GetRename(UIWindowsManager* manager, RenameOptions* options) {
		return ((T (*)(void *, UIWindowsManager*, RenameOptions*))(Il2CppBase() + 0x13A28F0))(0, manager, options);
	}

};

