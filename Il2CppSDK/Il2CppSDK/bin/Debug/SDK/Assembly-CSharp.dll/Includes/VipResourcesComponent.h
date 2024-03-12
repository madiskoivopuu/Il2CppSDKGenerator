#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipResourcesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipResourcesComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T Containes(Il2CppString* resourceName) {
		return ((T (*)(VipResourcesComponent*, Il2CppString*))(Il2CppBase() + 0x15CF120))(this, resourceName);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(VipResourcesComponent*, uintptr_t))(Il2CppBase() + 0x15CF1C0))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(VipResourcesComponent*, uintptr_t))(Il2CppBase() + 0x15CF258))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(VipResourcesComponent*, uintptr_t))(Il2CppBase() + 0x15CF3B4))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(VipResourcesComponent*, uintptr_t))(Il2CppBase() + 0x15CF45C))(this, blueprintComponent);
	}

};

}
