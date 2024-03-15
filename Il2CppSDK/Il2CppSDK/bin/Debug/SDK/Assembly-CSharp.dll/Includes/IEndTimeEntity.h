#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEndTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEndTimeEntity"));
	}


	template <typename R = EndTimeComponent*> R get_endTime() {
		return ((R (*)(IEndTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasEndTime() {
		return ((R (*)(IEndTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddEndTime(int64_t newValue) {
		return ((R (*)(IEndTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceEndTime(int64_t newValue) {
		return ((R (*)(IEndTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveEndTime() {
		return ((R (*)(IEndTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

