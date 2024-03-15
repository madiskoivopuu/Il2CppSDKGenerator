#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDraggedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDraggedEntity"));
	}


	template <typename R = bool> R get_isDragged() {
		return ((R (*)(IDraggedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isDragged(bool value) {
		return ((R (*)(IDraggedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

