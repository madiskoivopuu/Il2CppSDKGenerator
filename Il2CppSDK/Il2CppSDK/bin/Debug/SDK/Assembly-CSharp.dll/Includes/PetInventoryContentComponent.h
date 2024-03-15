#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetInventoryContentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetInventoryContentComponent"));
	}

	template <typename R = Il2CppArray<Item*>*> R& Data() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PetInventoryContentComponent*, Il2CppObject*))(Il2CppBase() + 0x11EDBCC))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PetInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x11EDC64))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PetInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x11EDCE8))(this, writer);
	}

};

