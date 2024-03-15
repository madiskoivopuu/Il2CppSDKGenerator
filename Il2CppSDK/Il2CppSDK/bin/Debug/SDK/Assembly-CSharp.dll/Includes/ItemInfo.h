#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemInfo"));
	}

	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	 Nullable1float>*& Durability() {
		return *(Nullable1float>**)((uintptr_t)this + 0xC);
	}


};

