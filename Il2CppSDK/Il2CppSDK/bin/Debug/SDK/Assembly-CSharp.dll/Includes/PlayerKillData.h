#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerKillData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerKillData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PlayerKillData*, uintptr_t))(Il2CppBase() + 0x156973C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PlayerKillData*, uintptr_t))(Il2CppBase() + 0x1569790))(this, reader);
	}

};

}
