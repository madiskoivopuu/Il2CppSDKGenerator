#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KickGuildMemberData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KickGuildMemberData"));
	}

	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(KickGuildMemberData*, uintptr_t))(Il2CppBase() + 0x14EC460))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(KickGuildMemberData*, uintptr_t))(Il2CppBase() + 0x14EC4A4))(this, reader);
	}

};

}
