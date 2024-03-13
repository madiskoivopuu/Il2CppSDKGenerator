#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreSlotsRewardView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSlotsRewardView"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Text() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = TooltipTrigger*> T& TooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Init(Resource* resource) {
		return ((T (*)(StoreSlotsRewardView*, Resource*))(Il2CppBase() + 0x1847378))(this, resource);
	}

};

