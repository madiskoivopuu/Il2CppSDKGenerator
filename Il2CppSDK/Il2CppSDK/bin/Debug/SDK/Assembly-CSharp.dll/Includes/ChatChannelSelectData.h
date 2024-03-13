#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatChannelSelectData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatChannelSelectData"));
	}

	template <typename T = Il2CppString*> T& ChannelType() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChatChannelSelectData*, uintptr_t))(Il2CppBase() + 0x13EFB00))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChatChannelSelectData*, uintptr_t))(Il2CppBase() + 0x13EFB44))(this, reader);
	}

};

