#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildEntityData"));
	}

	template <typename T = Il2CppString*> T& Recipe() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint8_t> T& Orientation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BuildEntityData*, uintptr_t))(Il2CppBase() + 0x15A4194))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BuildEntityData*, uintptr_t))(Il2CppBase() + 0x15A4218))(this, reader);
	}

};

