#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyActivateStatueEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyActivateStatueEntity"));
	}


	template <typename T = bool> T get_isApplyActivateStatue() {
		return ((T (*)(IApplyActivateStatueEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isApplyActivateStatue(bool value) {
		return ((T (*)(IApplyActivateStatueEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

