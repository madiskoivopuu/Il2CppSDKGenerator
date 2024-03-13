#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMetabolismEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMetabolismEntity"));
	}


	template <typename T = MetabolismComponent*> T get_metabolism() {
		return ((T (*)(IMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMetabolism() {
		return ((T (*)(IMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMetabolism(float newHunger, float newThirst) {
		return ((T (*)(IMetabolismEntity*, float, float))(Il2CppBase() + 0x0))(this, newHunger, newThirst);
	}
	template <typename T = void> T ReplaceMetabolism(float newHunger, float newThirst) {
		return ((T (*)(IMetabolismEntity*, float, float))(Il2CppBase() + 0x0))(this, newHunger, newThirst);
	}
	template <typename T = void> T RemoveMetabolism() {
		return ((T (*)(IMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}

};

