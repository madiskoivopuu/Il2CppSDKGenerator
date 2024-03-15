#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveEntityData"));
	}

	template <typename R = int32_t> R& EntityId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Instantly() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RemoveEntityData*, uintptr_t))(Il2CppBase() + 0x13A03D8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RemoveEntityData*, uintptr_t))(Il2CppBase() + 0x13A042C))(this, reader);
	}

};

