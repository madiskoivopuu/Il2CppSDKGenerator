#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatContactInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatContactInfo"));
	}

	template <typename R = Il2CppString*> R& Jid() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& LastOpenedTick() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<ChatMessage*>*> R& Messages() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

