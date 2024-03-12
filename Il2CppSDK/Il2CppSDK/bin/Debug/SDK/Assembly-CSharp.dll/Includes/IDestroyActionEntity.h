#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDestroyActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDestroyActionEntity"));
	}


	template <typename T = uintptr_t> T get_destroyAction() {
		return ((T (*)(IDestroyActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDestroyAction() {
		return ((T (*)(IDestroyActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDestroyAction(Il2CppString* newName) {
		return ((T (*)(IDestroyActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceDestroyAction(Il2CppString* newName) {
		return ((T (*)(IDestroyActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveDestroyAction() {
		return ((T (*)(IDestroyActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
