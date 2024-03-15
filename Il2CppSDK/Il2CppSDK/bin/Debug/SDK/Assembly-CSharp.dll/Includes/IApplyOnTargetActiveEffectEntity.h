#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyOnTargetActiveEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyOnTargetActiveEffectEntity"));
	}


	template <typename R = ApplyOnTargetActiveEffectComponent*> R get_applyOnTargetActiveEffect() {
		return ((R (*)(IApplyOnTargetActiveEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyOnTargetActiveEffect() {
		return ((R (*)(IApplyOnTargetActiveEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(IApplyOnTargetActiveEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(IApplyOnTargetActiveEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyOnTargetActiveEffect() {
		return ((R (*)(IApplyOnTargetActiveEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

