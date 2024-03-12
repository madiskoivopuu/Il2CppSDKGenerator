#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequiredComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RequiredComponent"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(RequiredComponent*, uintptr_t))(Il2CppBase() + 0x119848C))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(RequiredComponent*, uintptr_t))(Il2CppBase() + 0x1198520))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RequiredComponent*, uintptr_t))(Il2CppBase() + 0x11985BC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RequiredComponent*, uintptr_t))(Il2CppBase() + 0x1198628))(this, writer);
	}

};

}
