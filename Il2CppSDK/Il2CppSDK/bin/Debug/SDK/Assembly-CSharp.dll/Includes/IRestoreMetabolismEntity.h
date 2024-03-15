#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRestoreMetabolismEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRestoreMetabolismEntity"));
	}


	template <typename R = RestoreMetabolismComponent*> R get_restoreMetabolism() {
		return ((R (*)(IRestoreMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRestoreMetabolism() {
		return ((R (*)(IRestoreMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRestoreMetabolism(float newThirst, float newHunger) {
		return ((R (*)(IRestoreMetabolismEntity*, float, float))(Il2CppBase() + 0x0))(this, newThirst, newHunger);
	}
	template <typename R = void> R ReplaceRestoreMetabolism(float newThirst, float newHunger) {
		return ((R (*)(IRestoreMetabolismEntity*, float, float))(Il2CppBase() + 0x0))(this, newThirst, newHunger);
	}
	template <typename R = void> R RemoveRestoreMetabolism() {
		return ((R (*)(IRestoreMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}

};

