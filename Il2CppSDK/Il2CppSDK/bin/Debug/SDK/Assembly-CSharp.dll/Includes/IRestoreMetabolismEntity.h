#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRestoreMetabolismEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRestoreMetabolismEntity"));
	}


	template <typename T = RestoreMetabolismComponent*> T get_restoreMetabolism() {
		return ((T (*)(IRestoreMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRestoreMetabolism() {
		return ((T (*)(IRestoreMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRestoreMetabolism(float newThirst, float newHunger) {
		return ((T (*)(IRestoreMetabolismEntity*, float, float))(Il2CppBase() + 0x0))(this, newThirst, newHunger);
	}
	template <typename T = void> T ReplaceRestoreMetabolism(float newThirst, float newHunger) {
		return ((T (*)(IRestoreMetabolismEntity*, float, float))(Il2CppBase() + 0x0))(this, newThirst, newHunger);
	}
	template <typename T = void> T RemoveRestoreMetabolism() {
		return ((T (*)(IRestoreMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}

};

