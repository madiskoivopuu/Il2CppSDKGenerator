#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildConditionComponent"));
	}

	template <typename T = bool> T& HasGuild() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(GuildConditionComponent*, uintptr_t))(Il2CppBase() + 0x12EA7A4))(this, target);
	}

};

}
