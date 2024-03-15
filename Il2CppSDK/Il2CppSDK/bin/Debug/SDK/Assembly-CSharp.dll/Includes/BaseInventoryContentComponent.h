#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseInventoryContentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseInventoryContentComponent"));
	}

	template <typename R = Il2CppArray<Item*>*> R& Data() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BaseInventoryContentComponent*, Il2CppObject*))(Il2CppBase() + 0x166D248))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BaseInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x166D2E0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BaseInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x166D364))(this, writer);
	}

};

