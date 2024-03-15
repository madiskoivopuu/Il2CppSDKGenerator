#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextPic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextPic"));
	}

	 Il2CppList<uintptr_t>*& m_ImagesPool() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> static R& s_Regex() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& img_Regex() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = uintptr_t> static R& _imageMask() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = uintptr_t> R& ShadowDistance() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& ShadowColor() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = bool> R& updateQuad() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	 Il2CppList<uintptr_t>*& positions() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x128);
	}

	template <typename R = void> R UpdateQuadImage() {
		return ((R (*)(TextPic*))(Il2CppBase() + 0x14EDF74))(this);
	}
	template <typename R = Il2CppString*> R GetOutputText() {
		return ((R (*)(TextPic*))(Il2CppBase() + 0x14EE7A8))(this);
	}
	template <typename R = void> R OnPopulateMesh(uintptr_t toFill) {
		return ((R (*)(TextPic*, uintptr_t))(Il2CppBase() + 0x14EEFF0))(this, toFill);
	}
	template <typename R = void> R SetVerticesDirty() {
		return ((R (*)(TextPic*))(Il2CppBase() + 0x14EF2F0))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(TextPic*))(Il2CppBase() + 0x14EF31C))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(TextPic*))(Il2CppBase() + 0x14EF3B4))(this);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(TextPic*))(Il2CppBase() + 0x14EF5E0))(this);
	}

};

