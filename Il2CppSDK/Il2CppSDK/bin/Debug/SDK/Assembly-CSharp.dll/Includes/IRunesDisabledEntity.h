#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRunesDisabledEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRunesDisabledEntity"));
	}


	template <typename T = bool> T get_isRunesDisabled() {
		return ((T (*)(IRunesDisabledEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isRunesDisabled(bool value) {
		return ((T (*)(IRunesDisabledEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

