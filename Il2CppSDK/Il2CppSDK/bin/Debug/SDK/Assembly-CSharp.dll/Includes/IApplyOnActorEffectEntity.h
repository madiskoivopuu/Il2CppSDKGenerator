#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyOnActorEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyOnActorEffectEntity"));
	}


	template <typename R = ApplyOnActorEffectComponent*> R get_applyOnActorEffect() {
		return ((R (*)(IApplyOnActorEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyOnActorEffect() {
		return ((R (*)(IApplyOnActorEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(IApplyOnActorEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(IApplyOnActorEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyOnActorEffect() {
		return ((R (*)(IApplyOnActorEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};
