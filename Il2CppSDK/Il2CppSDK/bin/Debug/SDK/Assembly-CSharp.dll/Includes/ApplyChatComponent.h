#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyChatComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyChatComponent"));
	}

	template <typename T = Il2CppString*> T& ChannelName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& MessageFormat() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Params() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ApplyChatComponent*, uintptr_t))(Il2CppBase() + 0x18934EC))(this, targetObject);
	}

};

}
