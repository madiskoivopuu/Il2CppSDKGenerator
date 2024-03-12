#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerLifeTimeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerLifeTimeComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ServerLifeTimeComponent*, uintptr_t))(Il2CppBase() + 0x161FD50))(this, target);
	}

};

}
