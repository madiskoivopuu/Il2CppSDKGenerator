#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStateViewEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStateViewEntity"));
	}


	template <typename T = StateViewComponent*> T get_stateView() {
		return ((T (*)(IStateViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStateView() {
		return ((T (*)(IStateViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStateView(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newFirstOfValues) {
		return ((T (*)(IStateViewEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues, newFirstOfValues);
	}
	template <typename T = void> T ReplaceStateView(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newFirstOfValues) {
		return ((T (*)(IStateViewEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues, newFirstOfValues);
	}
	template <typename T = void> T RemoveStateView() {
		return ((T (*)(IStateViewEntity*))(Il2CppBase() + 0x0))(this);
	}

};

