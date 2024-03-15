#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptionDataList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptionDataList"));
	}

	 Il2CppList<OptionData*>*& m_Options() {
		return *(Il2CppList<OptionData*>**)((uintptr_t)this + 0x10);
	}

	 Il2CppList<OptionData*>* get_options() {
		return ((Il2CppList<OptionData*>* (*)(OptionDataList*))(Il2CppBase() + 0xE9DDF4))(this);
	}
	template <typename R = void> R set_options(Il2CppList<OptionData*>* value) {
		return ((R (*)(OptionDataList*, Il2CppList<OptionData*>*))(Il2CppBase() + 0xE9DDFC))(this, value);
	}

};

