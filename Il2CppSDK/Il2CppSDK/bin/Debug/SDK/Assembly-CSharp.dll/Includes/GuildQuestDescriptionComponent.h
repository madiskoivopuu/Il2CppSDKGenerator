#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestDescriptionComponent"));
	}

	template <typename T = uintptr_t> T& Difficulty() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MinGuildRankPoints() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MaxGuildRankPoints() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PlayerRewards() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(GuildQuestDescriptionComponent*, uintptr_t))(Il2CppBase() + 0x19339F0))(this, target);
	}

};

}
