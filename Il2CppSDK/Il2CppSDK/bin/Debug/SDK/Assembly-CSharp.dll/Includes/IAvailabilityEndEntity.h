#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAvailabilityEndEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAvailabilityEndEntity"));
	}


	template <typename R = AvailabilityEndComponent*> R get_availabilityEnd() {
		return ((R (*)(IAvailabilityEndEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAvailabilityEnd() {
		return ((R (*)(IAvailabilityEndEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAvailabilityEnd(int64_t newValue) {
		return ((R (*)(IAvailabilityEndEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceAvailabilityEnd(int64_t newValue) {
		return ((R (*)(IAvailabilityEndEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveAvailabilityEnd() {
		return ((R (*)(IAvailabilityEndEntity*))(Il2CppBase() + 0x0))(this);
	}

};

