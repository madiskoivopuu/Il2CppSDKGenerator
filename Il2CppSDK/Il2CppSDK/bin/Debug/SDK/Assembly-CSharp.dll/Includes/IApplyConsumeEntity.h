#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyConsumeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyConsumeEntity"));
	}


	template <typename T = uintptr_t> T get_applyConsume() {
		return ((T (*)(IApplyConsumeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyConsume() {
		return ((T (*)(IApplyConsumeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyConsume(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IApplyConsumeEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T ReplaceApplyConsume(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IApplyConsumeEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T RemoveApplyConsume() {
		return ((T (*)(IApplyConsumeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
