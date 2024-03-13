#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextEllipse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextEllipse"));
	}

	template <typename T = Il2CppString*> T& _ellipse() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _target() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _originalText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _lastText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _lastRect() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(TextEllipse*))(Il2CppBase() + 0x16B6A94))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(TextEllipse*))(Il2CppBase() + 0x16B6BAC))(this);
	}

};

