#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeathRecapWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeathRecapWindowHelper"));
	}


	template <typename R = DeathRecapWindow*> static R ShowDeathRecap(UIWindowsManager* manager, int64_t timeOut) {
		return ((R (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0xEB4694))(0, manager, timeOut);
	}

};

