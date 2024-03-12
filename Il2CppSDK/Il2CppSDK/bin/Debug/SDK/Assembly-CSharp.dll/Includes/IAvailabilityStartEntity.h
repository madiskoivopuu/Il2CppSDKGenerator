#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAvailabilityStartEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAvailabilityStartEntity"));
	}


	template <typename T = uintptr_t> T get_availabilityStart() {
		return ((T (*)(IAvailabilityStartEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAvailabilityStart() {
		return ((T (*)(IAvailabilityStartEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAvailabilityStart(int64_t newValue) {
		return ((T (*)(IAvailabilityStartEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceAvailabilityStart(int64_t newValue) {
		return ((T (*)(IAvailabilityStartEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveAvailabilityStart() {
		return ((T (*)(IAvailabilityStartEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
