#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMetabolismEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMetabolismEntity"));
	}


	template <typename R = MetabolismComponent*> R get_metabolism() {
		return ((R (*)(IMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMetabolism() {
		return ((R (*)(IMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMetabolism(float newHunger, float newThirst) {
		return ((R (*)(IMetabolismEntity*, float, float))(Il2CppBase() + 0x0))(this, newHunger, newThirst);
	}
	template <typename R = void> R ReplaceMetabolism(float newHunger, float newThirst) {
		return ((R (*)(IMetabolismEntity*, float, float))(Il2CppBase() + 0x0))(this, newHunger, newThirst);
	}
	template <typename R = void> R RemoveMetabolism() {
		return ((R (*)(IMetabolismEntity*))(Il2CppBase() + 0x0))(this);
	}

};

