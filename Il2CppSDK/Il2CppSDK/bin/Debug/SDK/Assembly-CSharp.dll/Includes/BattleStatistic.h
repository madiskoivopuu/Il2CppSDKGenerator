#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattleStatistic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleStatistic"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& StartHealth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& GuildId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<int64_t, uintptr_t>*> T& Players() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, float>*> T& SkillsDamage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, float>*> T& SkillsHeal() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& EndHealth() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& EndPhase() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = Il2CppString*> T ToLogString() {
		return ((T (*)(BattleStatistic*))(Il2CppBase() + 0x16B8454))(this);
	}

};

}
