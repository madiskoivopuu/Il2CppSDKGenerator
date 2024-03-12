#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveEntityDataForMapServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveEntityDataForMapServer"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& MapSlotName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& Fast() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MoveEntityDataForMapServer*, uintptr_t))(Il2CppBase() + 0x1556C88))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MoveEntityDataForMapServer*, uintptr_t))(Il2CppBase() + 0x1556CEC))(this, reader);
	}

};

}
