#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreBannerContainerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreBannerContainerView"));
	}

	template <typename R = StoreBannerView*> R& BannerViewX1InfoPrefab() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = StoreBannerView*> R& BannerViewX1Type1Prefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = StoreBannerView*> R& BannerViewX1Type2Prefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& SlotsContainer() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& SlotPrefab() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Init(Store2DataEntity* data, Category category) {
		return ((R (*)(StoreBannerContainerView*, Store2DataEntity*, Category))(Il2CppBase() + 0x14179CC))(this, data, category);
	}
	template <typename R = StoreBannerView*> R GetBannerPrefab(Il2CppString* bannerName) {
		return ((R (*)(StoreBannerContainerView*, Il2CppString*))(Il2CppBase() + 0x1417CE4))(this, bannerName);
	}

};

