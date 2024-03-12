#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceBannerSize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerSize"));
	}

	template <typename T = int32_t> T& width() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& height() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& description() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isAdaptive() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& BANNER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LARGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& RECTANGLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& SMART() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T SetAdaptive(bool adaptive) {
		return ((T (*)(IronSourceBannerSize*, bool))(Il2CppBase() + 0x1250258))(this, adaptive);
	}
	template <typename T = bool> T IsAdaptiveEnabled() {
		return ((T (*)(IronSourceBannerSize*))(Il2CppBase() + 0x1250264))(this);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(IronSourceBannerSize*))(Il2CppBase() + 0x125026C))(this);
	}
	template <typename T = int32_t> T get_Width() {
		return ((T (*)(IronSourceBannerSize*))(Il2CppBase() + 0x1250274))(this);
	}
	template <typename T = int32_t> T get_Height() {
		return ((T (*)(IronSourceBannerSize*))(Il2CppBase() + 0x125027C))(this);
	}

};

}
