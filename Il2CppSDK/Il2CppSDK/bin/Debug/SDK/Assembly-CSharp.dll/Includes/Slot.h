#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Slot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Slot"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R SetName(Il2CppString* value) {
		return ((R (*)(Slot*, Il2CppString*))(Il2CppBase() + 0xEA31EC))(this, value);
	}
	template <typename R = void> R SetId(int32_t value) {
		return ((R (*)(Slot*, int32_t))(Il2CppBase() + 0xEA31F4))(this, value);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Slot*, uintptr_t))(Il2CppBase() + 0xEA31FC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Slot*, uintptr_t))(Il2CppBase() + 0xEA3298))(this, writer);
	}

};

