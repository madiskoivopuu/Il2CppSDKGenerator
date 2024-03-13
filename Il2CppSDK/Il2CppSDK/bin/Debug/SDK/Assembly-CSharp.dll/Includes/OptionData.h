#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptionData"));
	}

	template <typename T = Il2CppString*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Image() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(OptionData*))(Il2CppBase() + 0xE9DD14))(this);
	}
	template <typename T = void> T set_text(Il2CppString* value) {
		return ((T (*)(OptionData*, Il2CppString*))(Il2CppBase() + 0xE9DD1C))(this, value);
	}
	template <typename T = uintptr_t> T get_image() {
		return ((T (*)(OptionData*))(Il2CppBase() + 0xE9DD24))(this);
	}
	template <typename T = void> T set_image(uintptr_t value) {
		return ((T (*)(OptionData*, uintptr_t))(Il2CppBase() + 0xE9DD2C))(this, value);
	}

};

