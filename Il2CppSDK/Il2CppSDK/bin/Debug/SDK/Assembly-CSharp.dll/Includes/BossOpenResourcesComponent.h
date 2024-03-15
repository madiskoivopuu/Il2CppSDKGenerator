#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossOpenResourcesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOpenResourcesComponent"));
	}

	template <typename R = CurrencyType*> R& PersonalReward() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& PointsToOpenPortal() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& SilverToProgress() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& OpenPortalItems() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<BossResource*>*> R& Bosses() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = BossResource*> R get_Item(Il2CppString* blueprint) {
		return ((R (*)(BossOpenResourcesComponent*, Il2CppString*))(Il2CppBase() + 0x16CBBC8))(this, blueprint);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BossOpenResourcesComponent*, Il2CppObject*))(Il2CppBase() + 0x16CC254))(this, target);
	}

};

