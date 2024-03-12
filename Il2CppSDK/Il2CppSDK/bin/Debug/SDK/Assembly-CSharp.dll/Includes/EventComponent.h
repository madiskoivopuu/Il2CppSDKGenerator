#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(EventComponent*, uintptr_t))(Il2CppBase() + 0x137F628))(this, target);
	}

};

}
