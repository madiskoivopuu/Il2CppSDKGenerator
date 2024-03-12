#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossOpenResourcesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOpenResourcesComponent"));
	}

	template <typename T = uintptr_t> T& PersonalReward() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PointsToOpenPortal() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& SilverToProgress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OpenPortalItems() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Bosses() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_Item(Il2CppString* blueprint) {
		return ((T (*)(BossOpenResourcesComponent*, Il2CppString*))(Il2CppBase() + 0x16CBBC8))(this, blueprint);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BossOpenResourcesComponent*, uintptr_t))(Il2CppBase() + 0x16CC254))(this, target);
	}

};

}
