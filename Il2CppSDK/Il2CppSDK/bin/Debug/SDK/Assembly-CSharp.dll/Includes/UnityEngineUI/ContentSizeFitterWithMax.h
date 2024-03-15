#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineUI {

class ContentSizeFitterWithMax
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngineUI", "ContentSizeFitterWithMax"));
	}

	template <typename R = uintptr_t> R& m_Rect() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& m_MaxWidth() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& m_MaxHeight() {
		return *(R*)((uintptr_t)this + 0x3C);
	}

	template <typename R = uintptr_t> R get_rectTransform() {
		return ((R (*)(ContentSizeFitterWithMax*))(Il2CppBase() + 0x15F2278))(this);
	}
	template <typename R = float> R get_maxWidth() {
		return ((R (*)(ContentSizeFitterWithMax*))(Il2CppBase() + 0x15F232C))(this);
	}
	template <typename R = void> R set_maxWidth(float value) {
		return ((R (*)(ContentSizeFitterWithMax*, float))(Il2CppBase() + 0x15F2334))(this, value);
	}
	template <typename R = float> R get_maxHeight() {
		return ((R (*)(ContentSizeFitterWithMax*))(Il2CppBase() + 0x15F233C))(this);
	}
	template <typename R = void> R set_maxHeight(float value) {
		return ((R (*)(ContentSizeFitterWithMax*, float))(Il2CppBase() + 0x15F2344))(this, value);
	}
	template <typename R = void> R SetLayoutHorizontal() {
		return ((R (*)(ContentSizeFitterWithMax*))(Il2CppBase() + 0x15F234C))(this);
	}
	template <typename R = void> R SetLayoutVertical() {
		return ((R (*)(ContentSizeFitterWithMax*))(Il2CppBase() + 0x15F2400))(this);
	}

};

}
