#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRunesDisabledEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRunesDisabledEntity"));
	}


	template <typename R = bool> R get_isRunesDisabled() {
		return ((R (*)(IRunesDisabledEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isRunesDisabled(bool value) {
		return ((R (*)(IRunesDisabledEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

