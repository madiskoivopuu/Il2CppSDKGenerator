#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CompleteChatNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CompleteChatNotifyComponent"));
	}

	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CompleteChatNotifyComponent*, Il2CppObject*))(Il2CppBase() + 0xE2D0F8))(this, target);
	}

};

