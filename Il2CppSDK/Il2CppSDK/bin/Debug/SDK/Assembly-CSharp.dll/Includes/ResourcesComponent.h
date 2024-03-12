#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourcesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourcesComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T Containes(Il2CppString* resourceName) {
		return ((T (*)(ResourcesComponent*, Il2CppString*))(Il2CppBase() + 0x119CB8C))(this, resourceName);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ResourcesComponent*, uintptr_t))(Il2CppBase() + 0x119CC2C))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ResourcesComponent*, uintptr_t))(Il2CppBase() + 0x119CCC4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ResourcesComponent*, uintptr_t))(Il2CppBase() + 0x119CE20))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(ResourcesComponent*, uintptr_t))(Il2CppBase() + 0x119CEC8))(this, blueprintComponent);
	}

};

}
