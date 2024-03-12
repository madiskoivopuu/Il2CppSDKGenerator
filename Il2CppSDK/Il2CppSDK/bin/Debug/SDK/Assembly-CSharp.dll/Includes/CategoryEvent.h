#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CategoryEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CategoryEvent"));
	}

	template <typename T = int64_t> T& AvailabilityStart() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& AvailabilityEnd() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& BadgeColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& BadgeImageAssetPath() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CategoryEvent*, uintptr_t))(Il2CppBase() + 0x13E8A68))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CategoryEvent*, uintptr_t))(Il2CppBase() + 0x13E8ACC))(this, reader);
	}
	template <typename T = bool> static T op_Equality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13E8BC0))(0, a, b);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13E8C5C))(0, a, b);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(CategoryEvent*, uintptr_t))(Il2CppBase() + 0x13E8BEC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(CategoryEvent*, uintptr_t))(Il2CppBase() + 0x13E8C98))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CategoryEvent*))(Il2CppBase() + 0x13E8D2C))(this);
	}

};

}
