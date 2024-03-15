#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftWorkComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftWorkComponent"));
	}

	template <typename R = Il2CppString*> R& Recipe() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Fuel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& FuelTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& Boost() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& IsBlocked() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int64_t> R& BlockTime() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CraftWorkComponent*, Il2CppObject*))(Il2CppBase() + 0x1349144))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CraftWorkComponent*, uintptr_t))(Il2CppBase() + 0x1349218))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CraftWorkComponent*, uintptr_t))(Il2CppBase() + 0x1349390))(this, writer);
	}

};

