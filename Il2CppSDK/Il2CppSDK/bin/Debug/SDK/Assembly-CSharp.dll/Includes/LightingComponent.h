#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightingComponent"));
	}

	template <typename T = Il2CppString*> T& EquatorColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& SkyColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& GroundColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& FogColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& FogStart() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& FogEnd() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& SceneLights() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(LightingComponent*, Il2CppObject*))(Il2CppBase() + 0x142C65C))(this, target);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LightingComponent*, uintptr_t))(Il2CppBase() + 0x142C744))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LightingComponent*, uintptr_t))(Il2CppBase() + 0x142C7DC))(this, reader);
	}

};

