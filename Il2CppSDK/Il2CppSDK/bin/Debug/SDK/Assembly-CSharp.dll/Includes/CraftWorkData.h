#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftWorkData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftWorkData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& RecipeName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Fuel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& FuelTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Boost() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsBlocked() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int64_t> T& BlockTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CraftWorkData*, uintptr_t))(Il2CppBase() + 0x1349430))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CraftWorkData*, uintptr_t))(Il2CppBase() + 0x13494E4))(this, reader);
	}

};

}
