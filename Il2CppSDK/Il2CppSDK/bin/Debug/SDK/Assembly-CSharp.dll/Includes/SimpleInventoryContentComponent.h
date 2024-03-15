#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimpleInventoryContentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimpleInventoryContentComponent"));
	}

	template <typename R = Il2CppArray<Item*>*> R& Data() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(SimpleInventoryContentComponent*, Il2CppObject*))(Il2CppBase() + 0x147F464))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SimpleInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x147F4FC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SimpleInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x147F580))(this, writer);
	}

};

