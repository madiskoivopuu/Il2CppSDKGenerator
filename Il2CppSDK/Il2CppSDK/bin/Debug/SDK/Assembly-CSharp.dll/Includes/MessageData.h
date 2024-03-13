#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageData"));
	}

	template <typename T = int64_t> T& EntityId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action2int64_t, Action1Il2CppString*>*>*> T& OnClicked() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Action1int64_t>*> T& OnExpired() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

