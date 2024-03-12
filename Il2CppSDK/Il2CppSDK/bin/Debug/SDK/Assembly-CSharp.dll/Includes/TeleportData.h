#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TeleportData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeleportData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& Ticks() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& PosX() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& PosY() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TeleportData*, uintptr_t))(Il2CppBase() + 0x16AD778))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TeleportData*, uintptr_t))(Il2CppBase() + 0x16AD7FC))(this, reader);
	}

};

}
