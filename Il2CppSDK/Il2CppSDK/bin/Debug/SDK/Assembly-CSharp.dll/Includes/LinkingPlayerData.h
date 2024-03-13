#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LinkingPlayerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkingPlayerData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& BattleTag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Region() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsLinked() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LinkingPlayerData*, uintptr_t))(Il2CppBase() + 0x142F1C0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LinkingPlayerData*, uintptr_t))(Il2CppBase() + 0x142EEB0))(this, writer);
	}

};

