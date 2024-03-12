#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Slot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Slot"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T SetName(Il2CppString* value) {
		return ((T (*)(Slot*, Il2CppString*))(Il2CppBase() + 0xEA31EC))(this, value);
	}
	template <typename T = void> T SetId(int32_t value) {
		return ((T (*)(Slot*, int32_t))(Il2CppBase() + 0xEA31F4))(this, value);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(Slot*, uintptr_t))(Il2CppBase() + 0xEA31FC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(Slot*, uintptr_t))(Il2CppBase() + 0xEA3298))(this, writer);
	}

};

}
