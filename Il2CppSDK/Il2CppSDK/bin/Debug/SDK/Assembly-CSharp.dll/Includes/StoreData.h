#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreData"));
	}

	template <typename R = TooltipView*> R& Tooltip() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Il2CppDictionary<int32_t, MessageData>*& Messages() {
		return *(Il2CppDictionary<int32_t, MessageData>**)((uintptr_t)this + 0x8);
	}


};

