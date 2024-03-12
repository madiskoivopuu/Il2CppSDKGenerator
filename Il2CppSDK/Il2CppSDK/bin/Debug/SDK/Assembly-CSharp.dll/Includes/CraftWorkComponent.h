#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftWorkComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftWorkComponent"));
	}

	template <typename T = Il2CppString*> T& Recipe() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Fuel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& FuelTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Boost() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& IsBlocked() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int64_t> T& BlockTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(CraftWorkComponent*, uintptr_t))(Il2CppBase() + 0x1349144))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CraftWorkComponent*, uintptr_t))(Il2CppBase() + 0x1349218))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CraftWorkComponent*, uintptr_t))(Il2CppBase() + 0x1349390))(this, writer);
	}

};

}
