#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FloorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloorComponent"));
	}

	template <typename R = Il2CppString*> R& Roof() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(FloorComponent*, Il2CppObject*))(Il2CppBase() + 0x15F7AB0))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FloorComponent*, uintptr_t))(Il2CppBase() + 0x15F7B48))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FloorComponent*, uintptr_t))(Il2CppBase() + 0x15F7BB4))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(FloorComponent*, Il2CppObject*))(Il2CppBase() + 0x15F7BC8))(this, blueprintComponent);
	}

};

