#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipResourcesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipResourcesComponent"));
	}

	template <typename R = Il2CppArray<Resource*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R Containes(Il2CppString* resourceName) {
		return ((R (*)(VipResourcesComponent*, Il2CppString*))(Il2CppBase() + 0x15CF120))(this, resourceName);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(VipResourcesComponent*, Il2CppObject*))(Il2CppBase() + 0x15CF1C0))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(VipResourcesComponent*, uintptr_t))(Il2CppBase() + 0x15CF258))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(VipResourcesComponent*, uintptr_t))(Il2CppBase() + 0x15CF3B4))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(VipResourcesComponent*, Il2CppObject*))(Il2CppBase() + 0x15CF45C))(this, blueprintComponent);
	}

};

