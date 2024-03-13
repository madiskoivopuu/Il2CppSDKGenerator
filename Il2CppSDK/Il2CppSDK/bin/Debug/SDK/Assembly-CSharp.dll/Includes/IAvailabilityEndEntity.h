#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAvailabilityEndEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAvailabilityEndEntity"));
	}


	template <typename T = AvailabilityEndComponent*> T get_availabilityEnd() {
		return ((T (*)(IAvailabilityEndEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAvailabilityEnd() {
		return ((T (*)(IAvailabilityEndEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAvailabilityEnd(int64_t newValue) {
		return ((T (*)(IAvailabilityEndEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceAvailabilityEnd(int64_t newValue) {
		return ((T (*)(IAvailabilityEndEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveAvailabilityEnd() {
		return ((T (*)(IAvailabilityEndEntity*))(Il2CppBase() + 0x0))(this);
	}

};

