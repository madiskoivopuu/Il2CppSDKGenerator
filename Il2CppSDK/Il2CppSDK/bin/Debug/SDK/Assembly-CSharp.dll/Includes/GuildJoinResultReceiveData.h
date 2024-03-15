#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildJoinResultReceiveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildJoinResultReceiveData"));
	}

	template <typename R = int64_t> R& MessageId() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GuildJoinResultReceiveData*, uintptr_t))(Il2CppBase() + 0x1B33C48))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GuildJoinResultReceiveData*, uintptr_t))(Il2CppBase() + 0x1B33C8C))(this, reader);
	}

};

