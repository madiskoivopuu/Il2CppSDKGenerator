#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageData"));
	}

	template <typename R = int64_t> R& EntityId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Action2int64_t, Action1Il2CppString*>*>*& OnClicked() {
		return *(Action2int64_t, Action1Il2CppString*>*>**)((uintptr_t)this + 0x8);
	}
	 Action1int64_t>*& OnExpired() {
		return *(Action1int64_t>**)((uintptr_t)this + 0x10);
	}


};
