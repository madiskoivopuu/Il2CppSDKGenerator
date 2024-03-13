#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceImpressionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceImpressionData"));
	}

	template <typename T = Il2CppString*> T& auctionId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& adUnit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& country() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& segmentName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& placement() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& adNetwork() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& instanceName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& instanceId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Nullable1double>*> T& revenue() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& precision() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Nullable1double>*> T& lifetimeRevenue() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& encryptedCPM() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Nullable1int32_t>*> T& conversionValue() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& allData() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(IronSourceImpressionData*))(Il2CppBase() + 0x10D54F8))(this);
	}

};

