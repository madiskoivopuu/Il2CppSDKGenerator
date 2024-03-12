#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IconComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IconComponent"));
	}

	template <typename T = Il2CppString*> T& AssetPath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& BackAssetPath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& OverlayAssetPath() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Overlay2AssetPath() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(IconComponent*, uintptr_t))(Il2CppBase() + 0x1E3CBB0))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(IconComponent*, uintptr_t))(Il2CppBase() + 0x1E3CC7C))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(IconComponent*, uintptr_t))(Il2CppBase() + 0x1E3CD64))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(IconComponent*, uintptr_t))(Il2CppBase() + 0x1E3CE58))(this, writer);
	}
	template <typename T = uintptr_t> T ToIcon() {
		return ((T (*)(IconComponent*))(Il2CppBase() + 0x1E3CEB8))(this);
	}

};

}
