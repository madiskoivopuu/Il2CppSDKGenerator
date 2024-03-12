#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUIPrefabEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUIPrefabEntity"));
	}


	template <typename T = uintptr_t> T get_uIPrefab() {
		return ((T (*)(IUIPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUIPrefab() {
		return ((T (*)(IUIPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((T (*)(IUIPrefabEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newText, newIcon, newParams);
	}
	template <typename T = void> T ReplaceUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((T (*)(IUIPrefabEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newText, newIcon, newParams);
	}
	template <typename T = void> T RemoveUIPrefab() {
		return ((T (*)(IUIPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
