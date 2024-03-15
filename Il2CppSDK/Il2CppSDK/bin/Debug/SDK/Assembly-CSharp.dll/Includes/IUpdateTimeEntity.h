#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUpdateTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUpdateTimeEntity"));
	}


	template <typename R = UpdateTimeComponent*> R get_updateTime() {
		return ((R (*)(IUpdateTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasUpdateTime() {
		return ((R (*)(IUpdateTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddUpdateTime(int64_t newValue) {
		return ((R (*)(IUpdateTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceUpdateTime(int64_t newValue) {
		return ((R (*)(IUpdateTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveUpdateTime() {
		return ((R (*)(IUpdateTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

