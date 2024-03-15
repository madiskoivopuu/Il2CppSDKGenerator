#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IconComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IconComponent"));
	}

	template <typename R = Il2CppString*> R& AssetPath() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& BackAssetPath() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& OverlayAssetPath() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Overlay2AssetPath() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(IconComponent*, Il2CppObject*))(Il2CppBase() + 0x1E3CBB0))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(IconComponent*, Il2CppObject*))(Il2CppBase() + 0x1E3CC7C))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(IconComponent*, uintptr_t))(Il2CppBase() + 0x1E3CD64))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(IconComponent*, uintptr_t))(Il2CppBase() + 0x1E3CE58))(this, writer);
	}
	template <typename R = Icon*> R ToIcon() {
		return ((R (*)(IconComponent*))(Il2CppBase() + 0x1E3CEB8))(this);
	}

};

