#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExplodeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeComponent"));
	}

	template <typename T = Il2CppString*> T& Item() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ExplodeComponent*, uintptr_t))(Il2CppBase() + 0x1685498))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(ExplodeComponent*, uintptr_t))(Il2CppBase() + 0x168553C))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ExplodeComponent*, uintptr_t))(Il2CppBase() + 0x16855F4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ExplodeComponent*, uintptr_t))(Il2CppBase() + 0x168569C))(this, writer);
	}

};

}
