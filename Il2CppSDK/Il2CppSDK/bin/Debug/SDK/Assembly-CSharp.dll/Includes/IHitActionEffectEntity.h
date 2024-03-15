#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHitActionEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHitActionEffectEntity"));
	}


	template <typename R = HitActionEffectComponent*> R get_hitActionEffect() {
		return ((R (*)(IHitActionEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHitActionEffect() {
		return ((R (*)(IHitActionEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHitActionEffect(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IHitActionEffectEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R ReplaceHitActionEffect(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IHitActionEffectEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R RemoveHitActionEffect() {
		return ((R (*)(IHitActionEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

