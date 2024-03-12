#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChangeDurationByLostHpEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChangeDurationByLostHpEntity"));
	}


	template <typename T = uintptr_t> T get_changeDurationByLostHp() {
		return ((T (*)(IChangeDurationByLostHpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasChangeDurationByLostHp() {
		return ((T (*)(IChangeDurationByLostHpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddChangeDurationByLostHp(uintptr_t newDamageCondition, float newSecondsByPercent) {
		return ((T (*)(IChangeDurationByLostHpEntity*, uintptr_t, float))(Il2CppBase() + 0x0))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename T = void> T ReplaceChangeDurationByLostHp(uintptr_t newDamageCondition, float newSecondsByPercent) {
		return ((T (*)(IChangeDurationByLostHpEntity*, uintptr_t, float))(Il2CppBase() + 0x0))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename T = void> T RemoveChangeDurationByLostHp() {
		return ((T (*)(IChangeDurationByLostHpEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
