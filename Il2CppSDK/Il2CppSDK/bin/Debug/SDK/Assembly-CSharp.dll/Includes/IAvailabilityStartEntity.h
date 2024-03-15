#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAvailabilityStartEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAvailabilityStartEntity"));
	}


	template <typename R = AvailabilityStartComponent*> R get_availabilityStart() {
		return ((R (*)(IAvailabilityStartEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAvailabilityStart() {
		return ((R (*)(IAvailabilityStartEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAvailabilityStart(int64_t newValue) {
		return ((R (*)(IAvailabilityStartEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceAvailabilityStart(int64_t newValue) {
		return ((R (*)(IAvailabilityStartEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveAvailabilityStart() {
		return ((R (*)(IAvailabilityStartEntity*))(Il2CppBase() + 0x0))(this);
	}

};

