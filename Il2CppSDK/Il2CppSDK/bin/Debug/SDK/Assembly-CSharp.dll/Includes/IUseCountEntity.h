#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUseCountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUseCountEntity"));
	}


	template <typename T = UseCountComponent*> T get_useCount() {
		return ((T (*)(IUseCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUseCount() {
		return ((T (*)(IUseCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUseCount(int32_t newValue) {
		return ((T (*)(IUseCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceUseCount(int32_t newValue) {
		return ((T (*)(IUseCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveUseCount() {
		return ((T (*)(IUseCountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

