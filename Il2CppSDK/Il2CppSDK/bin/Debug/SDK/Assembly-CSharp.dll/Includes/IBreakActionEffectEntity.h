#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBreakActionEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBreakActionEffectEntity"));
	}


	template <typename T = uintptr_t> T get_breakActionEffect() {
		return ((T (*)(IBreakActionEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBreakActionEffect() {
		return ((T (*)(IBreakActionEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBreakActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(IBreakActionEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceBreakActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(IBreakActionEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveBreakActionEffect() {
		return ((T (*)(IBreakActionEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
