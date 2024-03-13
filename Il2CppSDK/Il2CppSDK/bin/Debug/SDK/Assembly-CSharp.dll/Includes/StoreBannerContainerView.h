#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreBannerContainerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreBannerContainerView"));
	}

	template <typename T = StoreBannerView*> T& BannerViewX1InfoPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = StoreBannerView*> T& BannerViewX1Type1Prefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = StoreBannerView*> T& BannerViewX1Type2Prefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SlotsContainer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SlotPrefab() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Init(Store2DataEntity* data, Category* category) {
		return ((T (*)(StoreBannerContainerView*, Store2DataEntity*, Category*))(Il2CppBase() + 0x14179CC))(this, data, category);
	}
	template <typename T = StoreBannerView*> T GetBannerPrefab(Il2CppString* bannerName) {
		return ((T (*)(StoreBannerContainerView*, Il2CppString*))(Il2CppBase() + 0x1417CE4))(this, bannerName);
	}

};

