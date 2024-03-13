#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INeedRemoveEmptyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INeedRemoveEmptyEntity"));
	}


	template <typename T = NeedRemoveEmptyComponent*> T get_needRemoveEmpty() {
		return ((T (*)(INeedRemoveEmptyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasNeedRemoveEmpty() {
		return ((T (*)(INeedRemoveEmptyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((T (*)(INeedRemoveEmptyEntity*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue, newSpawnObject);
	}
	template <typename T = void> T ReplaceNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((T (*)(INeedRemoveEmptyEntity*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue, newSpawnObject);
	}
	template <typename T = void> T RemoveNeedRemoveEmpty() {
		return ((T (*)(INeedRemoveEmptyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

