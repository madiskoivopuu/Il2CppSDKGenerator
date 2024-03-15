#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CategoryEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CategoryEvent"));
	}

	template <typename R = int64_t> R& AvailabilityStart() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& AvailabilityEnd() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& BadgeColor() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& BadgeImageAssetPath() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CategoryEvent*, uintptr_t))(Il2CppBase() + 0x13E8A68))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CategoryEvent*, uintptr_t))(Il2CppBase() + 0x13E8ACC))(this, reader);
	}
	template <typename R = bool> static R op_Equality(CategoryEvent* a, CategoryEvent* b) {
		return ((R (*)(void *, CategoryEvent*, CategoryEvent*))(Il2CppBase() + 0x13E8BC0))(0, a, b);
	}
	template <typename R = bool> static R op_Inequality(CategoryEvent* a, CategoryEvent* b) {
		return ((R (*)(void *, CategoryEvent*, CategoryEvent*))(Il2CppBase() + 0x13E8C5C))(0, a, b);
	}
	template <typename R = bool> R Equals(CategoryEvent* other) {
		return ((R (*)(CategoryEvent*, CategoryEvent*))(Il2CppBase() + 0x13E8BEC))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(CategoryEvent*, Il2CppObject*))(Il2CppBase() + 0x13E8C98))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CategoryEvent*))(Il2CppBase() + 0x13E8D2C))(this);
	}

};

