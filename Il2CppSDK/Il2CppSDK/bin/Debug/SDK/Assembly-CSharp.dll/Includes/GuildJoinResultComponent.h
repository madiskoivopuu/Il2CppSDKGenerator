#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildJoinResultComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildJoinResultComponent"));
	}

	template <typename T = int64_t> T& GuildId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Accepted() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(GuildJoinResultComponent*, uintptr_t))(Il2CppBase() + 0x1B33AC4))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GuildJoinResultComponent*, uintptr_t))(Il2CppBase() + 0x1B33B60))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GuildJoinResultComponent*, uintptr_t))(Il2CppBase() + 0x1B33BFC))(this, writer);
	}

};

}
