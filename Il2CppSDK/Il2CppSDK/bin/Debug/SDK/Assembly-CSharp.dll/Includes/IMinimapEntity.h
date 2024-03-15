#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMinimapEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMinimapEntity"));
	}


	template <typename R = MinimapComponent*> R get_minimap() {
		return ((R (*)(IMinimapEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMinimap() {
		return ((R (*)(IMinimapEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<Item*>* newValues) {
		return ((R (*)(IMinimapEntity*, Il2CppString*, bool, bool, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename R = void> R ReplaceMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<Item*>* newValues) {
		return ((R (*)(IMinimapEntity*, Il2CppString*, bool, bool, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename R = void> R RemoveMinimap() {
		return ((R (*)(IMinimapEntity*))(Il2CppBase() + 0x0))(this);
	}

};

