#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattleStatistic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleStatistic"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& StartHealth() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& GuildId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppDictionary<int64_t, PlayerStatistic*>*& Players() {
		return *(Il2CppDictionary<int64_t, PlayerStatistic*>**)((uintptr_t)this + 0x28);
	}
	 Il2CppDictionary<Il2CppString*, float>*& SkillsDamage() {
		return *(Il2CppDictionary<Il2CppString*, float>**)((uintptr_t)this + 0x30);
	}
	 Il2CppDictionary<Il2CppString*, float>*& SkillsHeal() {
		return *(Il2CppDictionary<Il2CppString*, float>**)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& Duration() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& EndHealth() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = int32_t> R& EndPhase() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = Il2CppString*> R ToLogString() {
		return ((R (*)(BattleStatistic*))(Il2CppBase() + 0x16B8454))(this);
	}

};

