#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptionDataList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptionDataList"));
	}

	template <typename T = Il2CppList<OptionData*>*> T& m_Options() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<OptionData*>*> T get_options() {
		return ((T (*)(OptionDataList*))(Il2CppBase() + 0xE9DDF4))(this);
	}
	template <typename T = void> T set_options(Il2CppList<OptionData*>* value) {
		return ((T (*)(OptionDataList*, Il2CppList<OptionData*>*))(Il2CppBase() + 0xE9DDFC))(this, value);
	}

};

