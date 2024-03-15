#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStartTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStartTimeEntity"));
	}


	template <typename R = StartTimeComponent*> R get_startTime() {
		return ((R (*)(IStartTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStartTime() {
		return ((R (*)(IStartTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStartTime(int64_t newValue) {
		return ((R (*)(IStartTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceStartTime(int64_t newValue) {
		return ((R (*)(IStartTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveStartTime() {
		return ((R (*)(IStartTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

