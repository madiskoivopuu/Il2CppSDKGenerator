#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OverlayIcons
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OverlayIcons"));
	}

	template <typename R = uintptr_t> static R& _overlayImagePrefab() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _image1() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _image2() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _image3() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Nullable1<uintptr_t>*& _currentColor() {
		return *(Nullable1<uintptr_t>**)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _currentMaterial() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Nullable1<bool>*& _currentPreserveAspect() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R SetColor(uintptr_t color) {
		return ((R (*)(OverlayIcons*, uintptr_t))(Il2CppBase() + 0x11E5D84))(this, color);
	}
	template <typename R = void> R SetMaterial(uintptr_t material) {
		return ((R (*)(OverlayIcons*, uintptr_t))(Il2CppBase() + 0x11E5F4C))(this, material);
	}
	template <typename R = void> R SetPreserveAspect(bool value) {
		return ((R (*)(OverlayIcons*, bool))(Il2CppBase() + 0x11E60A4))(this, value);
	}
	template <typename R = void> R SetSprites(Il2CppString* sprite1Name, Il2CppString* sprite2Name, Il2CppString* sprite3Name) {
		return ((R (*)(OverlayIcons*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x11E61FC))(this, sprite1Name, sprite2Name, sprite3Name);
	}
	template <typename R = uintptr_t> R SetSprite(Il2CppString* spriteName, int32_t index, uintptr_t image) {
		return ((R (*)(OverlayIcons*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x11E6294))(this, spriteName, index, image);
	}
	template <typename R = uintptr_t> R CreateImage(int32_t index) {
		return ((R (*)(OverlayIcons*, int32_t))(Il2CppBase() + 0x11E646C))(this, index);
	}

};

