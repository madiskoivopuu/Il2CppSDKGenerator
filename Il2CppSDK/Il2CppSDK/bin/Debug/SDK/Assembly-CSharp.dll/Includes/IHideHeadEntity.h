#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHideHeadEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHideHeadEntity"));
	}


	template <typename T = bool> T get_isHideHead() {
		return ((T (*)(IHideHeadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isHideHead(bool value) {
		return ((T (*)(IHideHeadEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

