#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessagePayload
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessagePayload"));
	}

	template <typename T = Il2CppString*> T& Data() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Parameters() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = MessagePayloadType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

