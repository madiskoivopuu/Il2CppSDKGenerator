#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStartTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStartTimeEntity"));
	}


	template <typename T = StartTimeComponent*> T get_startTime() {
		return ((T (*)(IStartTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStartTime() {
		return ((T (*)(IStartTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStartTime(int64_t newValue) {
		return ((T (*)(IStartTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceStartTime(int64_t newValue) {
		return ((T (*)(IStartTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveStartTime() {
		return ((T (*)(IStartTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

