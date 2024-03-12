#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequiredItemsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RequiredItemsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& InfoText() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(RequiredItemsComponent*, uintptr_t))(Il2CppBase() + 0x119865C))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RequiredItemsComponent*, uintptr_t))(Il2CppBase() + 0x1198704))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RequiredItemsComponent*, uintptr_t))(Il2CppBase() + 0x11988A0))(this, writer);
	}

};

}
