#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveToTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveToTargetComponent"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MinDistance() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(MoveToTargetComponent*, uintptr_t))(Il2CppBase() + 0x1557510))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(MoveToTargetComponent*, uintptr_t))(Il2CppBase() + 0x15575AC))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MoveToTargetComponent*, uintptr_t))(Il2CppBase() + 0x1557660))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MoveToTargetComponent*, uintptr_t))(Il2CppBase() + 0x15576FC))(this, writer);
	}

};

}
