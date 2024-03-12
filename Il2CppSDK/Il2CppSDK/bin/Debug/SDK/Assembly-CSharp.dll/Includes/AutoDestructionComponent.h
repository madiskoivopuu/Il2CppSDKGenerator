#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoDestructionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoDestructionComponent"));
	}

	template <typename T = Il2CppString*> T& Effect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Condition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AutoDestructionComponent*, uintptr_t))(Il2CppBase() + 0x1A6240C))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AutoDestructionComponent*, uintptr_t))(Il2CppBase() + 0x1A624C8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AutoDestructionComponent*, uintptr_t))(Il2CppBase() + 0x1A62530))(this, reader);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(AutoDestructionComponent*, uintptr_t))(Il2CppBase() + 0x1A62624))(this, blueprintComponent);
	}

};

}
