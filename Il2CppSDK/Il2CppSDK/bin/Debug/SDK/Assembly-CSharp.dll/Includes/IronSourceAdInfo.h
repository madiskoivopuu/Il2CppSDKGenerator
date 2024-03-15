#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceAdInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceAdInfo"));
	}

	template <typename R = Il2CppString*> R& auctionId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& adUnit() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& country() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& ab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& segmentName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& adNetwork() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& instanceName() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& instanceId() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Nullable1double>*& revenue() {
		return *(Nullable1double>**)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& precision() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 Nullable1double>*& lifetimeRevenue() {
		return *(Nullable1double>**)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& encryptedCPM() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(IronSourceAdInfo*))(Il2CppBase() + 0x124BE64))(this);
	}

};

