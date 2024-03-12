#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PageComponent"));
	}

	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& CaptionImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(PageComponent*, uintptr_t))(Il2CppBase() + 0x11E9388))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(PageComponent*, uintptr_t))(Il2CppBase() + 0x11E9440))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PageComponent*, uintptr_t))(Il2CppBase() + 0x11E9514))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PageComponent*, uintptr_t))(Il2CppBase() + 0x11E95DC))(this, writer);
	}

};

}
