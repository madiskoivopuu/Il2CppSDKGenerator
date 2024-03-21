#pragma once

#include "../mscorlib/System/Object.h"


class IronSourceBannerSize : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerSize"));
	}

	int32_t& width() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	int32_t& height() {
		return *(int32_t*)((uintptr_t)this + 0x14);
	}

	Il2CppString*& description() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	bool& isAdaptive() {
		return *(bool*)((uintptr_t)this + 0x20);
	}

	static IronSourceBannerSize*& BANNER() {
		return *(IronSourceBannerSize**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static IronSourceBannerSize*& LARGE() {
		return *(IronSourceBannerSize**)((uintptr_t)ClassDef()->static_fields + 0x8);
	}

	static IronSourceBannerSize*& RECTANGLE() {
		return *(IronSourceBannerSize**)((uintptr_t)ClassDef()->static_fields + 0x10);
	}

	static IronSourceBannerSize*& SMART() {
		return *(IronSourceBannerSize**)((uintptr_t)ClassDef()->static_fields + 0x18);
	}

};};
