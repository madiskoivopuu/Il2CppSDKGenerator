#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyOnTargetActiveEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyOnTargetActiveEffectEntity"));
	}


	template <typename T = uintptr_t> T get_applyOnTargetActiveEffect() {
		return ((T (*)(IApplyOnTargetActiveEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyOnTargetActiveEffect() {
		return ((T (*)(IApplyOnTargetActiveEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(IApplyOnTargetActiveEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(IApplyOnTargetActiveEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveApplyOnTargetActiveEffect() {
		return ((T (*)(IApplyOnTargetActiveEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
