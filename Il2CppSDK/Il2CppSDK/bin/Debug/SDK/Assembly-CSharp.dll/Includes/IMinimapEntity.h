#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMinimapEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMinimapEntity"));
	}


	template <typename T = MinimapComponent*> T get_minimap() {
		return ((T (*)(IMinimapEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMinimap() {
		return ((T (*)(IMinimapEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IMinimapEntity*, Il2CppString*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename T = void> T ReplaceMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IMinimapEntity*, Il2CppString*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename T = void> T RemoveMinimap() {
		return ((T (*)(IMinimapEntity*))(Il2CppBase() + 0x0))(this);
	}

};

