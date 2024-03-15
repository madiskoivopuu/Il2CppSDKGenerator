#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KickGuildMemberData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KickGuildMemberData"));
	}

	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(KickGuildMemberData*, uintptr_t))(Il2CppBase() + 0x14EC460))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(KickGuildMemberData*, uintptr_t))(Il2CppBase() + 0x14EC4A4))(this, reader);
	}

};

