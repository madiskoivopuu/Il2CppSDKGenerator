#pragma once

#include "../mscorlib/System/Object.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Double.h"

namespace WaterfallConfiguration { class WaterfallConfigurationBuilder; }

class WaterfallConfiguration : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaterfallConfiguration"));
	}

	System::Nullable1<double>*& ceiling() {
		return *(System::Nullable1<double>**)((uintptr_t)this + 0x10);
	}

	System::Nullable1<double>*& floor() {
		return *(System::Nullable1<double>**)((uintptr_t)this + 0x20);
	}

};};
