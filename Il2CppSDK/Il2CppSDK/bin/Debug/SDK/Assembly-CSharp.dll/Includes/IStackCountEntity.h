#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStackCountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStackCountEntity"));
	}


	template <typename R = StackCountComponent*> R get_stackCount() {
		return ((R (*)(IStackCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStackCount() {
		return ((R (*)(IStackCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStackCount(int32_t newValue) {
		return ((R (*)(IStackCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceStackCount(int32_t newValue) {
		return ((R (*)(IStackCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveStackCount() {
		return ((R (*)(IStackCountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

