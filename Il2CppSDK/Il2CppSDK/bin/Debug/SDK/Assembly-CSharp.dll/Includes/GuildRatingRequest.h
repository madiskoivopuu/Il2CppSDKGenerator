#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildRatingRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRatingRequest"));
	}

	template <typename R = RatingGuildType*> R& RatingGuildType() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GuildRatingRequest*, uintptr_t))(Il2CppBase() + 0x193D5F4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GuildRatingRequest*, uintptr_t))(Il2CppBase() + 0x193D638))(this, reader);
	}

};

