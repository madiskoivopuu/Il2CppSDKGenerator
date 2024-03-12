#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildBossKilledConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildBossKilledConditionComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(GuildBossKilledConditionComponent*, uintptr_t))(Il2CppBase() + 0x12E642C))(this, target);
	}

};

}
