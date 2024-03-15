#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentBoolData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ComponentBoolData"));
	}

	template <typename R = int64_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int16_t> R& ComponentIndex() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0xA);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ComponentBoolData*, uintptr_t))(Il2CppBase() + 0xE2D24C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader, int64_t id) {
		return ((R (*)(ComponentBoolData*, uintptr_t, int64_t))(Il2CppBase() + 0xE2D2A0))(this, reader, id);
	}

};

