#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildJoinResultComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildJoinResultComponent"));
	}

	template <typename R = int64_t> R& GuildId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Accepted() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(GuildJoinResultComponent*, Il2CppObject*))(Il2CppBase() + 0x1B33AC4))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GuildJoinResultComponent*, uintptr_t))(Il2CppBase() + 0x1B33B60))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GuildJoinResultComponent*, uintptr_t))(Il2CppBase() + 0x1B33BFC))(this, writer);
	}

};

