#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineUI {

class ContentSizeFitterWithMax
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngineUI", "ContentSizeFitterWithMax"));
	}

	template <typename T = uintptr_t> T& m_Rect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_MaxWidth() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_MaxHeight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(ContentSizeFitterWithMax*))(Il2CppBase() + 0x15F2278))(this);
	}
	template <typename T = float> T get_maxWidth() {
		return ((T (*)(ContentSizeFitterWithMax*))(Il2CppBase() + 0x15F232C))(this);
	}
	template <typename T = void> T set_maxWidth(float value) {
		return ((T (*)(ContentSizeFitterWithMax*, float))(Il2CppBase() + 0x15F2334))(this, value);
	}
	template <typename T = float> T get_maxHeight() {
		return ((T (*)(ContentSizeFitterWithMax*))(Il2CppBase() + 0x15F233C))(this);
	}
	template <typename T = void> T set_maxHeight(float value) {
		return ((T (*)(ContentSizeFitterWithMax*, float))(Il2CppBase() + 0x15F2344))(this, value);
	}
	template <typename T = void> T SetLayoutHorizontal() {
		return ((T (*)(ContentSizeFitterWithMax*))(Il2CppBase() + 0x15F234C))(this);
	}
	template <typename T = void> T SetLayoutVertical() {
		return ((T (*)(ContentSizeFitterWithMax*))(Il2CppBase() + 0x15F2400))(this);
	}

};

}
