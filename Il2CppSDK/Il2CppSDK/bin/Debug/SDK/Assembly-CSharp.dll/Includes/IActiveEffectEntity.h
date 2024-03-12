#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActiveEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActiveEffectEntity"));
	}


	template <typename T = uintptr_t> T get_activeEffect() {
		return ((T (*)(IActiveEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasActiveEffect() {
		return ((T (*)(IActiveEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(IActiveEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(IActiveEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveActiveEffect() {
		return ((T (*)(IActiveEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
