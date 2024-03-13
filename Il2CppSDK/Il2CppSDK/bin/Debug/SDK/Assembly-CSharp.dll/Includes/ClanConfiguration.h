#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanConfiguration"));
	}

	template <typename T = int32_t> T& CreateClanGuildMinLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_CreateClanGuildMinLevel() {
		return ((T (*)(ClanConfiguration*))(Il2CppBase() + 0x174D248))(this);
	}
	template <typename T = void> T set_CreateClanGuildMinLevel(int32_t value) {
		return ((T (*)(ClanConfiguration*, int32_t))(Il2CppBase() + 0x174D250))(this, value);
	}

};

