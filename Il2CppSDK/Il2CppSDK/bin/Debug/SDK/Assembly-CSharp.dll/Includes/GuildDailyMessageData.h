#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildDailyMessageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildDailyMessageData"));
	}

	template <typename T = unsigned char> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GuildDailyMessageData*, uintptr_t))(Il2CppBase() + 0x12EBF80))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GuildDailyMessageData*, uintptr_t))(Il2CppBase() + 0x12EBFD4))(this, reader);
	}

};

}
