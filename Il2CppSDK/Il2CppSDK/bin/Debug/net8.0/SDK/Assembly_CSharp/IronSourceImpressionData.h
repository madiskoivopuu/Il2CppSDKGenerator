#pragma once

#include "../mscorlib/System/Object.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Double.h"
#include "../mscorlib/System/Int32.h"


class IronSourceImpressionData : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceImpressionData"));
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

	Il2CppString*& placement() {
		return *(Il2CppString**)((uintptr_t)this + 0x38);
	}

	Il2CppString*& adNetwork() {
		return *(Il2CppString**)((uintptr_t)this + 0x40);
	}

	Il2CppString*& instanceName() {
		return *(Il2CppString**)((uintptr_t)this + 0x48);
	}

	Il2CppString*& instanceId() {
		return *(Il2CppString**)((uintptr_t)this + 0x50);
	}

	System::Nullable1<double>*& revenue() {
		return *(System::Nullable1<double>**)((uintptr_t)this + 0x58);
	}

	Il2CppString*& precision() {
		return *(Il2CppString**)((uintptr_t)this + 0x68);
	}

	System::Nullable1<double>*& lifetimeRevenue() {
		return *(System::Nullable1<double>**)((uintptr_t)this + 0x70);
	}

	Il2CppString*& encryptedCPM() {
		return *(Il2CppString**)((uintptr_t)this + 0x80);
	}

	System::Nullable1<int32_t>*& conversionValue() {
		return *(System::Nullable1<int32_t>**)((uintptr_t)this + 0x88);
	}

	Il2CppString*& allData() {
		return *(Il2CppString**)((uintptr_t)this + 0x90);
	}

};};
