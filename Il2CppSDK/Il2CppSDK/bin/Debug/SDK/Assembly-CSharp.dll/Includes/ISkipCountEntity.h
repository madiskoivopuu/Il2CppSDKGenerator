#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISkipCountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISkipCountEntity"));
	}


	template <typename R = SkipCountComponent*> R get_skipCount() {
		return ((R (*)(ISkipCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSkipCount() {
		return ((R (*)(ISkipCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSkipCount(int32_t newValue) {
		return ((R (*)(ISkipCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceSkipCount(int32_t newValue) {
		return ((R (*)(ISkipCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveSkipCount() {
		return ((R (*)(ISkipCountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

