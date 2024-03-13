#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISkipCountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISkipCountEntity"));
	}


	template <typename T = SkipCountComponent*> T get_skipCount() {
		return ((T (*)(ISkipCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSkipCount() {
		return ((T (*)(ISkipCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSkipCount(int32_t newValue) {
		return ((T (*)(ISkipCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceSkipCount(int32_t newValue) {
		return ((T (*)(ISkipCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveSkipCount() {
		return ((T (*)(ISkipCountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

