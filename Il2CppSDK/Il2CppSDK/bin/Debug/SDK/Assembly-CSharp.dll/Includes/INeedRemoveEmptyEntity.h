#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INeedRemoveEmptyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INeedRemoveEmptyEntity"));
	}


	template <typename R = NeedRemoveEmptyComponent*> R get_needRemoveEmpty() {
		return ((R (*)(INeedRemoveEmptyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasNeedRemoveEmpty() {
		return ((R (*)(INeedRemoveEmptyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((R (*)(INeedRemoveEmptyEntity*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue, newSpawnObject);
	}
	template <typename R = void> R ReplaceNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((R (*)(INeedRemoveEmptyEntity*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue, newSpawnObject);
	}
	template <typename R = void> R RemoveNeedRemoveEmpty() {
		return ((R (*)(INeedRemoveEmptyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

