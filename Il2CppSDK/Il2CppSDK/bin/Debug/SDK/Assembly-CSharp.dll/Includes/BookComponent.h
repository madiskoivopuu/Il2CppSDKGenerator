#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BookComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BookComponent"));
	}

	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& CaptionImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& InitialCapImage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& InitialCapText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BookComponent*, uintptr_t))(Il2CppBase() + 0x16C7994))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(BookComponent*, uintptr_t))(Il2CppBase() + 0x16C7A6C))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BookComponent*, uintptr_t))(Il2CppBase() + 0x16C7B68))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BookComponent*, uintptr_t))(Il2CppBase() + 0x16C7C88))(this, writer);
	}

};

}
