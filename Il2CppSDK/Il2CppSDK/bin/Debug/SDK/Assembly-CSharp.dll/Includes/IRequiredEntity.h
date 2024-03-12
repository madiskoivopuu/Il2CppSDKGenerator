#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRequiredEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRequiredEntity"));
	}


	template <typename T = uintptr_t> T get_required() {
		return ((T (*)(IRequiredEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRequired() {
		return ((T (*)(IRequiredEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRequired(int32_t newLevel) {
		return ((T (*)(IRequiredEntity*, int32_t))(Il2CppBase() + 0x0))(this, newLevel);
	}
	template <typename T = void> T ReplaceRequired(int32_t newLevel) {
		return ((T (*)(IRequiredEntity*, int32_t))(Il2CppBase() + 0x0))(this, newLevel);
	}
	template <typename T = void> T RemoveRequired() {
		return ((T (*)(IRequiredEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
