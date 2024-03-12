#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxProgressEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxProgressEntity"));
	}


	template <typename T = uintptr_t> T get_maxProgress() {
		return ((T (*)(IMaxProgressEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxProgress() {
		return ((T (*)(IMaxProgressEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxProgress(int32_t newValue) {
		return ((T (*)(IMaxProgressEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceMaxProgress(int32_t newValue) {
		return ((T (*)(IMaxProgressEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveMaxProgress() {
		return ((T (*)(IMaxProgressEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
