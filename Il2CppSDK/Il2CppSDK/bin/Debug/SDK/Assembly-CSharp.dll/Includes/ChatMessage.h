#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatMessage"));
	}

	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& To() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& From() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& PlayerName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Channels() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& IsChat() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& IsGroupChat() {
		return *(R*)((uintptr_t)this + 0x41);
	}
	template <typename R = int64_t> R& Tick() {
		return *(R*)((uintptr_t)this + 0x48);
	}


};

