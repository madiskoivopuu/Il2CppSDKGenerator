#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogOfWarComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogOfWarComponent"));
	}

	template <typename R = Il2CppString*> R& PrefabName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ProtoModels::WorldResourcesType> R& ResourceType() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(FogOfWarComponent*, Il2CppObject*))(Il2CppBase() + 0x15F99A0))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FogOfWarComponent*, uintptr_t))(Il2CppBase() + 0x15F9A44))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FogOfWarComponent*, uintptr_t))(Il2CppBase() + 0x15F9AEC))(this, writer);
	}

};

