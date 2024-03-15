#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatChannelSelectData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatChannelSelectData"));
	}

	template <typename R = Il2CppString*> R& ChannelType() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChatChannelSelectData*, uintptr_t))(Il2CppBase() + 0x13EFB00))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChatChannelSelectData*, uintptr_t))(Il2CppBase() + 0x13EFB44))(this, reader);
	}

};

