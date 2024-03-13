#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatMessage"));
	}

	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& To() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& From() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Channels() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsChat() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsGroupChat() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = int64_t> T& Tick() {
		return *(T*)((uintptr_t)this + 0x48);
	}


};

