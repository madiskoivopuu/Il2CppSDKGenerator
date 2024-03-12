#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimpleInventoryContentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimpleInventoryContentComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(SimpleInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x147F464))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SimpleInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x147F4FC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SimpleInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x147F580))(this, writer);
	}

};

}
