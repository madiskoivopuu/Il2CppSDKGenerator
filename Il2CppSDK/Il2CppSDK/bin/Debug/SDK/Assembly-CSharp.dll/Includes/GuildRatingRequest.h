#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildRatingRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRatingRequest"));
	}

	template <typename T = RatingGuildType*> T& RatingGuildType() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GuildRatingRequest*, uintptr_t))(Il2CppBase() + 0x193D5F4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GuildRatingRequest*, uintptr_t))(Il2CppBase() + 0x193D638))(this, reader);
	}

};

