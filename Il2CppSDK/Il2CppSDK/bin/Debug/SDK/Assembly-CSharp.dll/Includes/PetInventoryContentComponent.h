#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetInventoryContentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetInventoryContentComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PetInventoryContentComponent*, Il2CppObject*))(Il2CppBase() + 0x11EDBCC))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PetInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x11EDC64))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PetInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x11EDCE8))(this, writer);
	}

};

