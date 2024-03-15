#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChangeDurationByLostHpEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChangeDurationByLostHpEntity"));
	}


	template <typename R = ChangeDurationByLostHpComponent*> R get_changeDurationByLostHp() {
		return ((R (*)(IChangeDurationByLostHpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasChangeDurationByLostHp() {
		return ((R (*)(IChangeDurationByLostHpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddChangeDurationByLostHp(DamageCondition* newDamageCondition, float newSecondsByPercent) {
		return ((R (*)(IChangeDurationByLostHpEntity*, DamageCondition*, float))(Il2CppBase() + 0x0))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename R = void> R ReplaceChangeDurationByLostHp(DamageCondition* newDamageCondition, float newSecondsByPercent) {
		return ((R (*)(IChangeDurationByLostHpEntity*, DamageCondition*, float))(Il2CppBase() + 0x0))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename R = void> R RemoveChangeDurationByLostHp() {
		return ((R (*)(IChangeDurationByLostHpEntity*))(Il2CppBase() + 0x0))(this);
	}

};

