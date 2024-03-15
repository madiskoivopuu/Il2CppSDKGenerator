#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourcesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourcesComponent"));
	}

	template <typename R = Il2CppArray<Resource*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R Containes(Il2CppString* resourceName) {
		return ((R (*)(ResourcesComponent*, Il2CppString*))(Il2CppBase() + 0x119CB8C))(this, resourceName);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ResourcesComponent*, Il2CppObject*))(Il2CppBase() + 0x119CC2C))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ResourcesComponent*, uintptr_t))(Il2CppBase() + 0x119CCC4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ResourcesComponent*, uintptr_t))(Il2CppBase() + 0x119CE20))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(ResourcesComponent*, Il2CppObject*))(Il2CppBase() + 0x119CEC8))(this, blueprintComponent);
	}

};

