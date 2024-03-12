#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatContactInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatContactInfo"));
	}

	template <typename T = Il2CppString*> T& Jid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& LastOpenedTick() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Messages() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
