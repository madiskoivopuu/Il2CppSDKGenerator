#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentBoolData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ComponentBoolData"));
	}

	template <typename T = int64_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int16_t> T& ComponentIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0xA);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ComponentBoolData*, uintptr_t))(Il2CppBase() + 0xE2D24C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader, int64_t id) {
		return ((T (*)(ComponentBoolData*, uintptr_t, int64_t))(Il2CppBase() + 0xE2D2A0))(this, reader, id);
	}

};

