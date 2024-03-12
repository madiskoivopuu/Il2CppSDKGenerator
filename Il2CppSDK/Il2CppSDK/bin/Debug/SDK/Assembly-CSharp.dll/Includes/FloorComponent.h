#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FloorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloorComponent"));
	}

	template <typename T = Il2CppString*> T& Roof() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(FloorComponent*, uintptr_t))(Il2CppBase() + 0x15F7AB0))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FloorComponent*, uintptr_t))(Il2CppBase() + 0x15F7B48))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FloorComponent*, uintptr_t))(Il2CppBase() + 0x15F7BB4))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(FloorComponent*, uintptr_t))(Il2CppBase() + 0x15F7BC8))(this, blueprintComponent);
	}

};

}
