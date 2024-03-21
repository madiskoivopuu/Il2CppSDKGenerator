#pragma once

#include "../mscorlib/System/Object.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Double.h"


class IronSourceAdInfo : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceAdInfo"));
	}

	Il2CppString*& auctionId() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& adUnit() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	Il2CppString*& country() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	Il2CppString*& ab() {
		return *(Il2CppString**)((uintptr_t)this + 0x28);
	}

	Il2CppString*& segmentName() {
		return *(Il2CppString**)((uintptr_t)this + 0x30);
	}

	Il2CppString*& adNetwork() {
		return *(Il2CppString**)((uintptr_t)this + 0x38);
	}

	Il2CppString*& instanceName() {
		return *(Il2CppString**)((uintptr_t)this + 0x40);
	}

	Il2CppString*& instanceId() {
		return *(Il2CppString**)((uintptr_t)this + 0x48);
	}

	System::Nullable1<double>*& revenue() {
		return *(System::Nullable1<double>**)((uintptr_t)this + 0x50);
	}

	Il2CppString*& precision() {
		return *(Il2CppString**)((uintptr_t)this + 0x60);
	}

	System::Nullable1<double>*& lifetimeRevenue() {
		return *(System::Nullable1<double>**)((uintptr_t)this + 0x68);
	}

	Il2CppString*& encryptedCPM() {
		return *(Il2CppString**)((uintptr_t)this + 0x78);
	}

};};
