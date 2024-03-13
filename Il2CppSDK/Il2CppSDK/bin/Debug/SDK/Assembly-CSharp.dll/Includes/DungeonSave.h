#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonSave
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonSave"));
	}


	template <typename T = void> T OnGUI() {
		return ((T (*)(DungeonSave*))(Il2CppBase() + 0x1A96968))(this);
	}
	template <typename T = void> T SaveWorld() {
		return ((T (*)(DungeonSave*))(Il2CppBase() + 0x1A96A1C))(this);
	}

};

