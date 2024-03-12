#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArrivalTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArrivalTimeEntity"));
	}


	template <typename T = uintptr_t> T get_arrivalTime() {
		return ((T (*)(IArrivalTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArrivalTime() {
		return ((T (*)(IArrivalTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArrivalTime(int64_t newValue) {
		return ((T (*)(IArrivalTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceArrivalTime(int64_t newValue) {
		return ((T (*)(IArrivalTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveArrivalTime() {
		return ((T (*)(IArrivalTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
