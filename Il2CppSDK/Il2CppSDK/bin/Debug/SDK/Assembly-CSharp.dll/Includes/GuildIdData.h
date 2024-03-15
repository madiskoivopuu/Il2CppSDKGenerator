#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildIdData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildIdData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& GuildId() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GuildIdData*, uintptr_t))(Il2CppBase() + 0x1B262E4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GuildIdData*, uintptr_t))(Il2CppBase() + 0x1B26338))(this, reader);
	}

};

