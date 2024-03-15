#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatRoom"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Type() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& LastOpened() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& IsHistoryEnabled() {
		return *(R*)((uintptr_t)this + 0x28);
	}


};

