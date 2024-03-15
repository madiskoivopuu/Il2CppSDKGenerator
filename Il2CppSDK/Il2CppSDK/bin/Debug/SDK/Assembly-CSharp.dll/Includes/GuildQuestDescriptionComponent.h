#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestDescriptionComponent"));
	}

	template <typename R = GuildQuestDifficulty*> R& Difficulty() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& MinGuildRankPoints() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& MaxGuildRankPoints() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<int32_t>*> R& PlayerRewards() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(GuildQuestDescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0x19339F0))(this, target);
	}

};

