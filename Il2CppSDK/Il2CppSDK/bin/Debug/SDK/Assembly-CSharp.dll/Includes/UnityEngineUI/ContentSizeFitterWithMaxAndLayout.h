#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineUI {

class ContentSizeFitterWithMaxAndLayout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngineUI", "ContentSizeFitterWithMaxAndLayout"));
	}

	template <typename R = UpdateMode> R& m_UpdateMode() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& m_MaxWidth() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& m_MaxHeight() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _rtfm() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _fitter() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _layout() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(ContentSizeFitterWithMaxAndLayout*))(Il2CppBase() + 0x15F24C4))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(ContentSizeFitterWithMaxAndLayout*))(Il2CppBase() + 0x15F25A0))(this);
	}
	template <typename R = void> R UpdateHorizontal() {
		return ((R (*)(ContentSizeFitterWithMaxAndLayout*))(Il2CppBase() + 0x15F260C))(this);
	}
	template <typename R = void> R UpdateVertical() {
		return ((R (*)(ContentSizeFitterWithMaxAndLayout*))(Il2CppBase() + 0x15F27A4))(this);
	}

};

}
