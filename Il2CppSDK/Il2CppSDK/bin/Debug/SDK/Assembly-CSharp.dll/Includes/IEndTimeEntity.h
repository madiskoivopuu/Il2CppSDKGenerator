#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEndTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEndTimeEntity"));
	}


	template <typename T = uintptr_t> T get_endTime() {
		return ((T (*)(IEndTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasEndTime() {
		return ((T (*)(IEndTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddEndTime(int64_t newValue) {
		return ((T (*)(IEndTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceEndTime(int64_t newValue) {
		return ((T (*)(IEndTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveEndTime() {
		return ((T (*)(IEndTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
