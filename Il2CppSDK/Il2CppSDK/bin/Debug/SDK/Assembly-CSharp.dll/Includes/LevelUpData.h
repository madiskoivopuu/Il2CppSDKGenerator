#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelUpData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelUpData"));
	}

	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& NewLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& OldLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LevelUpData*, uintptr_t))(Il2CppBase() + 0x142BCF4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LevelUpData*, uintptr_t))(Il2CppBase() + 0x142BD58))(this, reader);
	}

};

}
