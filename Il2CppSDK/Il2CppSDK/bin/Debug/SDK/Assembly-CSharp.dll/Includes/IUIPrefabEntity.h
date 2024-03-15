#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUIPrefabEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUIPrefabEntity"));
	}


	template <typename R = UIPrefabComponent*> R get_uIPrefab() {
		return ((R (*)(IUIPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasUIPrefab() {
		return ((R (*)(IUIPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((R (*)(IUIPrefabEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newText, newIcon, newParams);
	}
	template <typename R = void> R ReplaceUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((R (*)(IUIPrefabEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName, newText, newIcon, newParams);
	}
	template <typename R = void> R RemoveUIPrefab() {
		return ((R (*)(IUIPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}

};

