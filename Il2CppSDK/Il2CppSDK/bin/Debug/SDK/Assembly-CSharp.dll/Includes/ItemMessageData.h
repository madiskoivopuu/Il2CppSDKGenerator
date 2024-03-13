#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemMessageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemMessageData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = ItemForMessage*> T& Prefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& DescriptionCaption() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& DescriptionText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1int64_t>*> T& ShowGhostyEndTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

