#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentStringData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ComponentStringData"));
	}

	template <typename R = int64_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int16_t> R& ComponentIndex() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& Replace() {
		return *(R*)((uintptr_t)this + 0xA);
	}
	template <typename R = Il2CppString*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ComponentStringData*, uintptr_t))(Il2CppBase() + 0xE2D520))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader, int64_t id) {
		return ((R (*)(ComponentStringData*, uintptr_t, int64_t))(Il2CppBase() + 0xE2D598))(this, reader, id);
	}

};

