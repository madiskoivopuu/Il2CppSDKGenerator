#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStateViewEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStateViewEntity"));
	}


	template <typename R = StateViewComponent*> R get_stateView() {
		return ((R (*)(IStateViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStateView() {
		return ((R (*)(IStateViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStateView(Il2CppArray<Item*>* newValues, Il2CppArray<Item*>* newFirstOfValues) {
		return ((R (*)(IStateViewEntity*, Il2CppArray<Item*>*, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newValues, newFirstOfValues);
	}
	template <typename R = void> R ReplaceStateView(Il2CppArray<Item*>* newValues, Il2CppArray<Item*>* newFirstOfValues) {
		return ((R (*)(IStateViewEntity*, Il2CppArray<Item*>*, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newValues, newFirstOfValues);
	}
	template <typename R = void> R RemoveStateView() {
		return ((R (*)(IStateViewEntity*))(Il2CppBase() + 0x0))(this);
	}

};

