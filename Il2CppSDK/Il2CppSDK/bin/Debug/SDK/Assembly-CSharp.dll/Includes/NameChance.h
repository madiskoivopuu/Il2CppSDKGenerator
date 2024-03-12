#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NameChance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NameChance"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Chance() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ChanceName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T GetChanceValue(uintptr_t world, uintptr_t actor) {
		return ((T (*)(NameChance*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEAA1B4))(this, world, actor);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(NameChance*, uintptr_t))(Il2CppBase() + 0xEAA2C8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(NameChance*, uintptr_t))(Il2CppBase() + 0xEAA390))(this, writer);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(NameChance*, uintptr_t))(Il2CppBase() + 0xEAA3E8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(NameChance*, uintptr_t))(Il2CppBase() + 0xEAA448))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(NameChance*))(Il2CppBase() + 0xEAA4E4))(this);
	}

};

}
