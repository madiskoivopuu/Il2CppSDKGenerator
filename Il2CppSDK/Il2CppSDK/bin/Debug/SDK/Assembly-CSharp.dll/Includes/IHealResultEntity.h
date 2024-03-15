#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealResultEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealResultEntity"));
	}


	template <typename R = HealResultComponent*> R get_healResult() {
		return ((R (*)(IHealResultEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHealResult() {
		return ((R (*)(IHealResultEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHealResult(HealResultParams newParams) {
		return ((R (*)(IHealResultEntity*, HealResultParams))(Il2CppBase() + 0x0))(this, newParams);
	}
	template <typename R = void> R ReplaceHealResult(HealResultParams newParams) {
		return ((R (*)(IHealResultEntity*, HealResultParams))(Il2CppBase() + 0x0))(this, newParams);
	}
	template <typename R = void> R RemoveHealResult() {
		return ((R (*)(IHealResultEntity*))(Il2CppBase() + 0x0))(this);
	}

};

