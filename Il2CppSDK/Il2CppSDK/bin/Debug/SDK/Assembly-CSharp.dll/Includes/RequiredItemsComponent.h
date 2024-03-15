#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequiredItemsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RequiredItemsComponent"));
	}

	template <typename R = Il2CppArray<Item>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& InfoText() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RequiredItemsComponent*, Il2CppObject*))(Il2CppBase() + 0x119865C))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RequiredItemsComponent*, uintptr_t))(Il2CppBase() + 0x1198704))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RequiredItemsComponent*, uintptr_t))(Il2CppBase() + 0x11988A0))(this, writer);
	}

};

