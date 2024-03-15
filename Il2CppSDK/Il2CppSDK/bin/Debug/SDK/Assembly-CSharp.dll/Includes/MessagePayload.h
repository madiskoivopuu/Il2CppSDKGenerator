#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessagePayload
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessagePayload"));
	}

	template <typename R = Il2CppString*> R& Data() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Parameters() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = MessagePayloadType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

