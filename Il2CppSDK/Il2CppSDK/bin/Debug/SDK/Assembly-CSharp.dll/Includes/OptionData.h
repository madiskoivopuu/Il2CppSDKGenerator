#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptionData"));
	}

	template <typename R = Il2CppString*> R& m_Text() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& m_Image() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppString*> R get_text() {
		return ((R (*)(OptionData*))(Il2CppBase() + 0xE9DD14))(this);
	}
	template <typename R = void> R set_text(Il2CppString* value) {
		return ((R (*)(OptionData*, Il2CppString*))(Il2CppBase() + 0xE9DD1C))(this, value);
	}
	template <typename R = uintptr_t> R get_image() {
		return ((R (*)(OptionData*))(Il2CppBase() + 0xE9DD24))(this);
	}
	template <typename R = void> R set_image(uintptr_t value) {
		return ((R (*)(OptionData*, uintptr_t))(Il2CppBase() + 0xE9DD2C))(this, value);
	}

};

