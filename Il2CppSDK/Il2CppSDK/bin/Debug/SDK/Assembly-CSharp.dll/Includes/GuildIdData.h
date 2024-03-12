#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildIdData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildIdData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& GuildId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GuildIdData*, uintptr_t))(Il2CppBase() + 0x1B262E4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GuildIdData*, uintptr_t))(Il2CppBase() + 0x1B26338))(this, reader);
	}

};

}
