#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveEntityDataForMapServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveEntityDataForMapServer"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& MapSlotName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& Fast() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MoveEntityDataForMapServer*, uintptr_t))(Il2CppBase() + 0x1556C88))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MoveEntityDataForMapServer*, uintptr_t))(Il2CppBase() + 0x1556CEC))(this, reader);
	}

};

