#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStackCountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStackCountEntity"));
	}


	template <typename T = StackCountComponent*> T get_stackCount() {
		return ((T (*)(IStackCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStackCount() {
		return ((T (*)(IStackCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStackCount(int32_t newValue) {
		return ((T (*)(IStackCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceStackCount(int32_t newValue) {
		return ((T (*)(IStackCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveStackCount() {
		return ((T (*)(IStackCountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

