#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineUI {

class ContentSizeFitterWithMaxAndLayout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngineUI", "ContentSizeFitterWithMaxAndLayout"));
	}

	template <typename T = UpdateMode*> T& m_UpdateMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_MaxWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_MaxHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _rtfm() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _fitter() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _layout() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ContentSizeFitterWithMaxAndLayout*))(Il2CppBase() + 0x15F24C4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ContentSizeFitterWithMaxAndLayout*))(Il2CppBase() + 0x15F25A0))(this);
	}
	template <typename T = void> T UpdateHorizontal() {
		return ((T (*)(ContentSizeFitterWithMaxAndLayout*))(Il2CppBase() + 0x15F260C))(this);
	}
	template <typename T = void> T UpdateVertical() {
		return ((T (*)(ContentSizeFitterWithMaxAndLayout*))(Il2CppBase() + 0x15F27A4))(this);
	}

};

}
