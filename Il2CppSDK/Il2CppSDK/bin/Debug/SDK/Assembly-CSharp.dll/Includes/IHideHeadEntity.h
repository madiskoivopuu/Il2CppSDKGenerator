#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHideHeadEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHideHeadEntity"));
	}


	template <typename R = bool> R get_isHideHead() {
		return ((R (*)(IHideHeadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isHideHead(bool value) {
		return ((R (*)(IHideHeadEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

