#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftWorkData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftWorkData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& RecipeName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int64_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Fuel() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& FuelTime() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Boost() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& IsBlocked() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int64_t> R& BlockTime() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CraftWorkData*, uintptr_t))(Il2CppBase() + 0x1349430))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CraftWorkData*, uintptr_t))(Il2CppBase() + 0x13494E4))(this, reader);
	}

};

