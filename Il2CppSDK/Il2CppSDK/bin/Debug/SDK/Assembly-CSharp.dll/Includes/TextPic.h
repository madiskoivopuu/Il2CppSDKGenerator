#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextPic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextPic"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_ImagesPool() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> static T& s_Regex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& img_Regex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _imageMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& ShadowDistance() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& ShadowColor() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& updateQuad() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& positions() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = void> T UpdateQuadImage() {
		return ((T (*)(TextPic*))(Il2CppBase() + 0x14EDF74))(this);
	}
	template <typename T = Il2CppString*> T GetOutputText() {
		return ((T (*)(TextPic*))(Il2CppBase() + 0x14EE7A8))(this);
	}
	template <typename T = void> T OnPopulateMesh(uintptr_t toFill) {
		return ((T (*)(TextPic*, uintptr_t))(Il2CppBase() + 0x14EEFF0))(this, toFill);
	}
	template <typename T = void> T SetVerticesDirty() {
		return ((T (*)(TextPic*))(Il2CppBase() + 0x14EF2F0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TextPic*))(Il2CppBase() + 0x14EF31C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TextPic*))(Il2CppBase() + 0x14EF3B4))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(TextPic*))(Il2CppBase() + 0x14EF5E0))(this);
	}

};

