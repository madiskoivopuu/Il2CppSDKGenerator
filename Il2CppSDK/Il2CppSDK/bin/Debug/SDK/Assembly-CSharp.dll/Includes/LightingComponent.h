#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightingComponent"));
	}

	template <typename R = Il2CppString*> R& EquatorColor() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& SkyColor() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& GroundColor() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& FogColor() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& FogStart() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& FogEnd() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = Il2CppString*> R& SceneLights() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(LightingComponent*, Il2CppObject*))(Il2CppBase() + 0x142C65C))(this, target);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LightingComponent*, uintptr_t))(Il2CppBase() + 0x142C744))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LightingComponent*, uintptr_t))(Il2CppBase() + 0x142C7DC))(this, reader);
	}

};

