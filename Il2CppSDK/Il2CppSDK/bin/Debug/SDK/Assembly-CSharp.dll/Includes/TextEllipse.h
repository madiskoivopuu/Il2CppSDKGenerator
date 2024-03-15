#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextEllipse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextEllipse"));
	}

	template <typename R = Il2CppString*> R& _ellipse() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _target() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& _originalText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& _lastText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _lastRect() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(TextEllipse*))(Il2CppBase() + 0x16B6A94))(this);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(TextEllipse*))(Il2CppBase() + 0x16B6BAC))(this);
	}

};

