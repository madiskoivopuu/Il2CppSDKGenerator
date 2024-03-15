#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICountEntity"));
	}


	template <typename R = CountComponent*> R get_count() {
		return ((R (*)(ICountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCount() {
		return ((R (*)(ICountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCount(int32_t newValue) {
		return ((R (*)(ICountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceCount(int32_t newValue) {
		return ((R (*)(ICountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveCount() {
		return ((R (*)(ICountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

