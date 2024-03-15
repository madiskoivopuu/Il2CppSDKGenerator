#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUseCountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUseCountEntity"));
	}


	template <typename R = UseCountComponent*> R get_useCount() {
		return ((R (*)(IUseCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasUseCount() {
		return ((R (*)(IUseCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddUseCount(int32_t newValue) {
		return ((R (*)(IUseCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceUseCount(int32_t newValue) {
		return ((R (*)(IUseCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveUseCount() {
		return ((R (*)(IUseCountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

