#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUpgradeEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUpgradeEffectEntity"));
	}


	template <typename T = uintptr_t> T get_upgradeEffect() {
		return ((T (*)(IUpgradeEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUpgradeEffect() {
		return ((T (*)(IUpgradeEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUpgradeEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(IUpgradeEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceUpgradeEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(IUpgradeEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveUpgradeEffect() {
		return ((T (*)(IUpgradeEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
