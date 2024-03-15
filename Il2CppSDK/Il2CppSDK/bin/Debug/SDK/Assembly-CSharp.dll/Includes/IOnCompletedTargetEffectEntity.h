#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOnCompletedTargetEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOnCompletedTargetEffectEntity"));
	}


	template <typename R = OnCompletedTargetEffectComponent*> R get_onCompletedTargetEffect() {
		return ((R (*)(IOnCompletedTargetEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOnCompletedTargetEffect() {
		return ((R (*)(IOnCompletedTargetEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOnCompletedTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(IOnCompletedTargetEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceOnCompletedTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(IOnCompletedTargetEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveOnCompletedTargetEffect() {
		return ((R (*)(IOnCompletedTargetEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

