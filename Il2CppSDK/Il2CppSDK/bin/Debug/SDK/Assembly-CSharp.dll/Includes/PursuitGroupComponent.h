#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PursuitGroupComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PursuitGroupComponent"));
	}

	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& GroupName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(PursuitGroupComponent*, uintptr_t))(Il2CppBase() + 0x11BA0F0))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(PursuitGroupComponent*, uintptr_t))(Il2CppBase() + 0x11BA190))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PursuitGroupComponent*, uintptr_t))(Il2CppBase() + 0x11BA290))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PursuitGroupComponent*, uintptr_t))(Il2CppBase() + 0x11BA32C))(this, writer);
	}

};

}
