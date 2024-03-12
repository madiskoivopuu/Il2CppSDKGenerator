#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseInventoryContentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseInventoryContentComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BaseInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x166D248))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BaseInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x166D2E0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BaseInventoryContentComponent*, uintptr_t))(Il2CppBase() + 0x166D364))(this, writer);
	}

};

}
