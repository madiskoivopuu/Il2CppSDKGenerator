#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PursuitGroupComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PursuitGroupComponent"));
	}

	template <typename R = float> R& Distance() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& GroupName() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PursuitGroupComponent*, Il2CppObject*))(Il2CppBase() + 0x11BA0F0))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(PursuitGroupComponent*, Il2CppObject*))(Il2CppBase() + 0x11BA190))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PursuitGroupComponent*, uintptr_t))(Il2CppBase() + 0x11BA290))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PursuitGroupComponent*, uintptr_t))(Il2CppBase() + 0x11BA32C))(this, writer);
	}

};

