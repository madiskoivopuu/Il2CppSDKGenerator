#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CompleteChatNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CompleteChatNotifyComponent"));
	}

	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(CompleteChatNotifyComponent*, Il2CppObject*))(Il2CppBase() + 0xE2D0F8))(this, target);
	}

};

