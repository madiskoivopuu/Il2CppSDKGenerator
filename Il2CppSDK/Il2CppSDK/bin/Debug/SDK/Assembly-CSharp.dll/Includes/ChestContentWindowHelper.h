#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestContentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestContentWindowHelper"));
	}


	template <typename R = ChestContentWindow*> static R ShowChestContentWindow(UIWindowsManager* manager, Il2CppString* itemBlueprint, Il2CppString* warningText) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x173F848))(0, manager, itemBlueprint, warningText);
	}

};

