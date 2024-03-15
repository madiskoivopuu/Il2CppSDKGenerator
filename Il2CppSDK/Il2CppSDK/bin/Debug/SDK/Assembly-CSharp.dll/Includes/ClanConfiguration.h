#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanConfiguration"));
	}

	template <typename R = int32_t> R& CreateClanGuildMinLevel() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = int32_t> R get_CreateClanGuildMinLevel() {
		return ((R (*)(ClanConfiguration*))(Il2CppBase() + 0x174D248))(this);
	}
	template <typename R = void> R set_CreateClanGuildMinLevel(int32_t value) {
		return ((R (*)(ClanConfiguration*, int32_t))(Il2CppBase() + 0x174D250))(this, value);
	}

};

