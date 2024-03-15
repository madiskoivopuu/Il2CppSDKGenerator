#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceBannerSize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerSize"));
	}

	template <typename R = int32_t> R& width() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& height() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& description() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& isAdaptive() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = IronSourceBannerSize*> static R& BANNER() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = IronSourceBannerSize*> static R& LARGE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = IronSourceBannerSize*> static R& RECTANGLE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = IronSourceBannerSize*> static R& SMART() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename R = void> R SetAdaptive(bool adaptive) {
		return ((R (*)(IronSourceBannerSize*, bool))(Il2CppBase() + 0x1250258))(this, adaptive);
	}
	template <typename R = bool> R IsAdaptiveEnabled() {
		return ((R (*)(IronSourceBannerSize*))(Il2CppBase() + 0x1250264))(this);
	}
	template <typename R = Il2CppString*> R get_Description() {
		return ((R (*)(IronSourceBannerSize*))(Il2CppBase() + 0x125026C))(this);
	}
	template <typename R = int32_t> R get_Width() {
		return ((R (*)(IronSourceBannerSize*))(Il2CppBase() + 0x1250274))(this);
	}
	template <typename R = int32_t> R get_Height() {
		return ((R (*)(IronSourceBannerSize*))(Il2CppBase() + 0x125027C))(this);
	}

};

