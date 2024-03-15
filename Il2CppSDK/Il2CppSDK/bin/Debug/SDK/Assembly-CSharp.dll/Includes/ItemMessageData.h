#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemMessageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemMessageData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = ItemForMessage*> R& Prefab() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& DescriptionCaption() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& DescriptionText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Nullable1<int64_t>*& ShowGhostyEndTime() {
		return *(Nullable1<int64_t>**)((uintptr_t)this + 0x28);
	}


};

