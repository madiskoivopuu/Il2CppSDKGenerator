#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenInventoryContainerRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenInventoryContainerRequest"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(OpenInventoryContainerRequest*, uintptr_t))(Il2CppBase() + 0x11E3A54))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(OpenInventoryContainerRequest*, uintptr_t))(Il2CppBase() + 0x11E3AA8))(this, reader);
	}

};

}
