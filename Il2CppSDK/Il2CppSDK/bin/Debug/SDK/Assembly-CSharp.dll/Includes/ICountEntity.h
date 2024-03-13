#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICountEntity"));
	}


	template <typename T = CountComponent*> T get_count() {
		return ((T (*)(ICountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCount() {
		return ((T (*)(ICountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCount(int32_t newValue) {
		return ((T (*)(ICountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceCount(int32_t newValue) {
		return ((T (*)(ICountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveCount() {
		return ((T (*)(ICountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

