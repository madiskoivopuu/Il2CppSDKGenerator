#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OverlayIcons
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OverlayIcons"));
	}

	template <typename T = uintptr_t> static T& _overlayImagePrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _image1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _image2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _image3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _currentColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _currentMaterial() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _currentPreserveAspect() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T SetColor(uintptr_t color) {
		return ((T (*)(OverlayIcons*, uintptr_t))(Il2CppBase() + 0x11E5D84))(this, color);
	}
	template <typename T = void> T SetMaterial(uintptr_t material) {
		return ((T (*)(OverlayIcons*, uintptr_t))(Il2CppBase() + 0x11E5F4C))(this, material);
	}
	template <typename T = void> T SetPreserveAspect(bool value) {
		return ((T (*)(OverlayIcons*, bool))(Il2CppBase() + 0x11E60A4))(this, value);
	}
	template <typename T = void> T SetSprites(Il2CppString* sprite1Name, Il2CppString* sprite2Name, Il2CppString* sprite3Name) {
		return ((T (*)(OverlayIcons*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x11E61FC))(this, sprite1Name, sprite2Name, sprite3Name);
	}
	template <typename T = uintptr_t> T SetSprite(Il2CppString* spriteName, int32_t index, uintptr_t image) {
		return ((T (*)(OverlayIcons*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x11E6294))(this, spriteName, index, image);
	}
	template <typename T = uintptr_t> T CreateImage(int32_t index) {
		return ((T (*)(OverlayIcons*, int32_t))(Il2CppBase() + 0x11E646C))(this, index);
	}

};

}
