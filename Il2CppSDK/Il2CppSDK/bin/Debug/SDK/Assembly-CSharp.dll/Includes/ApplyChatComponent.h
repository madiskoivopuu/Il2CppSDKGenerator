#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyChatComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyChatComponent"));
	}

	template <typename R = Il2CppString*> R& ChannelName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& MessageFormat() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Params() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplyChatComponent*, Il2CppObject*))(Il2CppBase() + 0x18934EC))(this, targetObject);
	}

};

