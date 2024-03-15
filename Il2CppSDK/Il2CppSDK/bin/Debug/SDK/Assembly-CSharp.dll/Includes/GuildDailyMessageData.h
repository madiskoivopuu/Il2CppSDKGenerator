#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildDailyMessageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildDailyMessageData"));
	}

	template <typename R = uint8_t> R& Type() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GuildDailyMessageData*, uintptr_t))(Il2CppBase() + 0x12EBF80))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GuildDailyMessageData*, uintptr_t))(Il2CppBase() + 0x12EBFD4))(this, reader);
	}

};

