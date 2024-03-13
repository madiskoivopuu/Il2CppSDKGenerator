#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUpdateTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUpdateTimeEntity"));
	}


	template <typename T = UpdateTimeComponent*> T get_updateTime() {
		return ((T (*)(IUpdateTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUpdateTime() {
		return ((T (*)(IUpdateTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUpdateTime(int64_t newValue) {
		return ((T (*)(IUpdateTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceUpdateTime(int64_t newValue) {
		return ((T (*)(IUpdateTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveUpdateTime() {
		return ((T (*)(IUpdateTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

