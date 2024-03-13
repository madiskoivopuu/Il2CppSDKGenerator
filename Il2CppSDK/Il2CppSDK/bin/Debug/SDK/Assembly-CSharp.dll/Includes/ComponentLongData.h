#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentLongData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ComponentLongData"));
	}

	template <typename T = int64_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int16_t> T& ComponentIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& Replace() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = int64_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ComponentLongData*, uintptr_t))(Il2CppBase() + 0xE2D388))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader, int64_t id) {
		return ((T (*)(ComponentLongData*, uintptr_t, int64_t))(Il2CppBase() + 0xE2D400))(this, reader, id);
	}

};

