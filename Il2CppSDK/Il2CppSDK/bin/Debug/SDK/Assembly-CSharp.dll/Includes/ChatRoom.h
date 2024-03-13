#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatRoom"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& LastOpened() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsHistoryEnabled() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

