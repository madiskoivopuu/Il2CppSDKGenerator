#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyResurrectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyResurrectEntity"));
	}


	template <typename R = bool> R get_isApplyResurrect() {
		return ((R (*)(IApplyResurrectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isApplyResurrect(bool value) {
		return ((R (*)(IApplyResurrectEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

