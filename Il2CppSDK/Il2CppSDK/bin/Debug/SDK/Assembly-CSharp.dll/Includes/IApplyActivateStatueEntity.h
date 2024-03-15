#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyActivateStatueEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyActivateStatueEntity"));
	}


	template <typename R = bool> R get_isApplyActivateStatue() {
		return ((R (*)(IApplyActivateStatueEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isApplyActivateStatue(bool value) {
		return ((R (*)(IApplyActivateStatueEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

