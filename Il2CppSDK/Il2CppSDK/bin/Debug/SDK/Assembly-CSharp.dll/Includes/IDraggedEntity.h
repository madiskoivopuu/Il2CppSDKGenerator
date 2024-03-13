#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDraggedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDraggedEntity"));
	}


	template <typename T = bool> T get_isDragged() {
		return ((T (*)(IDraggedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isDragged(bool value) {
		return ((T (*)(IDraggedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

