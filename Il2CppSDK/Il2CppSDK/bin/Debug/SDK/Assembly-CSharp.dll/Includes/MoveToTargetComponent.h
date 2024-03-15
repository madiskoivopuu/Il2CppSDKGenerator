#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveToTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveToTargetComponent"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& MinDistance() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MoveToTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x1557510))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(MoveToTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x15575AC))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MoveToTargetComponent*, uintptr_t))(Il2CppBase() + 0x1557660))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MoveToTargetComponent*, uintptr_t))(Il2CppBase() + 0x15576FC))(this, writer);
	}

};

