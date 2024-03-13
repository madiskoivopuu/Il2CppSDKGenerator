#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyResurrectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyResurrectEntity"));
	}


	template <typename T = bool> T get_isApplyResurrect() {
		return ((T (*)(IApplyResurrectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isApplyResurrect(bool value) {
		return ((T (*)(IApplyResurrectEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

