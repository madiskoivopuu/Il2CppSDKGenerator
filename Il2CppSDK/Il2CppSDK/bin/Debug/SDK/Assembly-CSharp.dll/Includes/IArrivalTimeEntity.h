#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArrivalTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArrivalTimeEntity"));
	}


	template <typename R = ArrivalTimeComponent*> R get_arrivalTime() {
		return ((R (*)(IArrivalTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArrivalTime() {
		return ((R (*)(IArrivalTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArrivalTime(int64_t newValue) {
		return ((R (*)(IArrivalTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceArrivalTime(int64_t newValue) {
		return ((R (*)(IArrivalTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveArrivalTime() {
		return ((R (*)(IArrivalTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

