#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildJoinResultReceiveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildJoinResultReceiveData"));
	}

	template <typename T = int64_t> T& MessageId() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GuildJoinResultReceiveData*, uintptr_t))(Il2CppBase() + 0x1B33C48))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GuildJoinResultReceiveData*, uintptr_t))(Il2CppBase() + 0x1B33C8C))(this, reader);
	}

};

