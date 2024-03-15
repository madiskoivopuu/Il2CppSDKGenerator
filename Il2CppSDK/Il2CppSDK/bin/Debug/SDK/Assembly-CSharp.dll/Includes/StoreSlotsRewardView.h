#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreSlotsRewardView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSlotsRewardView"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = TooltipTrigger*> R& TooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Init(Resource* resource) {
		return ((R (*)(StoreSlotsRewardView*, Resource*))(Il2CppBase() + 0x1847378))(this, resource);
	}

};

