#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenInventoryContainerRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenInventoryContainerRequest"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Key() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(OpenInventoryContainerRequest*, uintptr_t))(Il2CppBase() + 0x11E3A54))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(OpenInventoryContainerRequest*, uintptr_t))(Il2CppBase() + 0x11E3AA8))(this, reader);
	}

};

